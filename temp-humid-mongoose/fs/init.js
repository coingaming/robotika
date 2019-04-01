load('api_config.js');
load('api_rpc.js');
load('api_dht.js');
load('api_timer.js');
load('api_mq135.js');
load('api_mqtt.js');

let dhtPin = Cfg.get('app.dhtPin');
let mqPin = Cfg.get('app.mqPin');

let dht = DHT.create(dhtPin, DHT.DHT11);

let rzero =0;
let correctedRZero = 0;
let resistance = 0;
let ppm = 0;
let correctedPPM = 0;

MQ.MQ135.attach(mqPin);

Timer.set(10000, true, function() {
  let temperature = dht.getTemp();
  let humidity = dht.getHumidity();

  print('Temperature:', temperature);
  print('Humidity:', humidity);

  rzero = MQ.MQ135.getRZero();
  correctedRZero = MQ.MQ135.getCorrectedRZero(temperature, humidity);
  resistance = MQ.MQ135.getResistance();
  ppm = MQ.MQ135.getPPM();
  correctedPPM = MQ.MQ135.getCorrectedPPM(temperature, humidity);

  print('MQ135 RZero: ',rzero,' Corrected RZero: ',correctedRZero,'\n');
  print('Resistance: ',resistance," kohm\n");
  print('PPM: ',ppm,' Corrected PPM: ',correctedPPM,' ppm\n');

  let message = JSON.stringify({temp: temperature});
  // let ok = MQTT.pub("sensors/temperature", JSON.stringify({temp: temperature}), message.length);
  // print('Published: ', ok ? 'yes' : 'no', "topic: sensors/temperature", "message: ", message);
  // MQTT.pub("sensors", "humidity", humidity);
  // MQTT.pub("sensors", "PPM", correctedPPM);
}, null);

RPC.addHandler('TempHumid.Read', function(args) {
  let temperature = dht.getTemp();
  let humidity = dht.getHumidity();

  rzero = MQ.MQ135.getRZero();
  correctedRZero = MQ.MQ135.getCorrectedRZero(temperature, humidity);
  resistance = MQ.MQ135.getResistance();
  ppm = MQ.MQ135.getPPM();
  correctedPPM = MQ.MQ135.getCorrectedPPM(temperature, humidity);

  return { temp: temperature, humid: humidity, ppm: correctedPPM };
});