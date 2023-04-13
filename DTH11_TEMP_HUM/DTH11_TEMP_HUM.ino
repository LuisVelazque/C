#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 3;
int temp;
int HUM;
DHT dht(SENSOR, DHT11);


void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
temp=dht.readTemperature();
HUM=dht.readHumidity();
Serial.print("Temaperatura: ");
Serial.print(temp);
Serial.print(" Humedad: ");
Serial.println(HUM);
delay(500);
}
