#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 8;
int temp;
int HUM;
DHT dht(SENSOR, DHT11);

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
Serial.begin(9600);
dht.begin();

lcd.begin(16,2);

}

void loop(){

temp=dht.readTemperature();
HUM=dht.readHumidity();
Serial.print("Temaperatura: ");
Serial.print(temp);
Serial.print(" Humedad: ");
Serial.println(HUM);


lcd.setCursor(0,0);
lcd.print("Humedad: ");
lcd.print(HUM);
lcd.print("%");

lcd.setCursor(0,1);
lcd.print("TEMP: ");
lcd.print(temp);
lcd.print(" *C");
delay(500);
}