load('api_config.js');
load('api_rpc.js');
load('api_dht.js');
load('api_timer.js');

let pin = Cfg.get('app.pin');
let dht = DHT.create(pin, DHT.DHT11);

Timer.set(1000, true, function() {
  print('Temperature:', dht.getTemp());
  print('Humidity:', dht.getHumidity());
}, null);

RPC.addHandler('TempHumid.Read', function(args) {
  return { temp: dht.getTemp(), humid: dht.getHumidity() };
});