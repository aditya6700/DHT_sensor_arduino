#include <DHT.h>
#define DHTPIN 0          //pin where the dht11 is connected
DHT dht(DHTPIN, DHT11);

void setup(){
  Serial.begin(9600);
    dht.begin();
 
}

void loop()
{

    float h = dht.readHumidity();
      float t = dht.readTemperature();

       Serial.print("Temperature: ");
       Serial.print(t);
       Serial.print(" degrees Celcius, Humidity: ");
       Serial.print(h);
 
}
