//const int MOTOR_PIN = 8;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
//  pinMode(MOTOR_PIN, OUTPUT);
  Serial.begin(9600);
}

void blink_times(int count) {
  for (int i=0; i<=count-1; i++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }
}

void loop() {
  int sensorValue = analogRead(A0);
  if (sensorValue > 0 && sensorValue < 100) {
    blink_times(2);
  } 
  else if (sensorValue > 100 && sensorValue < 1000) {
    blink_times(3);
  } 
  else if (sensorValue > 1000 && sensorValue < 2000) {
    blink_times(4);
  }
  Serial.println(sensorValue);
  
  delay(1000);
}
