#include "DHT.h"

DHT dht;
void setup() {  
  Serial.begin(9600);
  dht.setup(13); // D7 of node mcu
  }
  
void loop() { 
  delay(dht.getMinimumSamplingPeriod());
  Serial.print("Current Humidity : "); 
  Serial.print(dht.getHumidity());  
  Serial.print("\n"); 
  Serial.print("Current Temp : "); 
  Serial.print(dht.getTemperature());
  Serial.print("\n"); 
  delay(3000);
  }
