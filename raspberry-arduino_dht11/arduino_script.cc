#include <dht.h>

dht DHT;

#define DHT11_PIN 7

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int chk = DHT.read11(DHT11_PIN);
  Serial.print(DHT.temperature);
  Serial.print("|");
  Serial.println(DHT.humidity);
  delay(10000);
}
