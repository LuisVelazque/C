int spdP=11;
int dP1=12;
int dP2=13;

int speedM=255;

void setup() {
  Serial.begin(9600);
  pinMode(spdP,OUTPUT);
  pinMode(dP1,OUTPUT);
  pinMode(dP2,OUTPUT);
}

void loop() {
 digitalWrite(dP1,0);
 digitalWrite(dP2,1);
 analogWrite(spdP,speedM);
delay(6000);
digitalWrite(dP1,1);
digitalWrite(dP2,0);
analogWrite(spdP,speedM);
delay(6000);
}

