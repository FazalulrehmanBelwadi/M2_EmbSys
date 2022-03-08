#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int light = 12;
int pump = 10;
int tempPin = A0; // the output pin of LM35
int fan = 11; // the pin where fan is
int ledpin1 = 9;
int pir1;
int sensor1 = 13;
 

void setup() {
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(pump, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(sensor1, INPUT);   
  pinMode(ledpin1, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  
  lcd.setCursor(0,0);
  lcd.print("GREEN HOUSE");
  lcd.setCursor(0,1);
  lcd.print("AUTOMATION");
  delay(2000);
  lcd.clear();
  
}

void loop() {

  
  tempreture();
  soilMositure();
  LDR();
  motionDetected1();

}

void tempreture()
{
 int temp = analogRead(A0);
  Serial.println(temp);

  if(temp>30){
    digitalWrite(fan, HIGH);
    lcd.begin(16,3);
    lcd.setCursor(0,0);
    lcd.print("Temp is High");
    lcd.setCursor(0,1);
    lcd.print("FAN is ON");
    delay(2000);
    lcd.clear();
  }
  else{
    digitalWrite(fan, LOW);
    lcd.begin(16,4);
    lcd.setCursor(0,0);
    lcd.print("Temp is Normal");
    lcd.setCursor(0,1);
    lcd.print("FAN is OFF");
    delay(2000);
    lcd.clear();
  }
}

void motionDetected1() {
  pir1 = digitalRead (sensor1);
  // Serial.println(pir1);

  if (pir1 == HIGH) {
    digitalWrite(ledpin1, HIGH);
    lcd.begin(16, 5);
    lcd.setCursor(0,0);
    lcd.print("Motion is DET");
    lcd.setCursor(0,1);
    lcd.print("Motion LED ON");
    delay(2000);
    lcd.clear();
  }
  else {
    digitalWrite(ledpin1, LOW);
    lcd.begin(16, 6);
    lcd.setCursor(0,0);
    lcd.print("Motion is not DET");
    lcd.setCursor(0,1);
    lcd.print("Motion LED OFF");
    delay(2000);
    lcd.clear();
  }
}


void  soilMositure() {
 int soil = analogRead(A2);
  Serial.println(soil);

  if (soil> 400) {// soil value 
    digitalWrite(pump, HIGH);
    lcd.begin(16, 7);
    lcd.setCursor(0,0);
    lcd.print("Low Moisture");
    lcd.setCursor(0,1);
    lcd.print("Pump is ON");
    delay(2000);
    lcd.clear();
  } else {
    digitalWrite(pump, LOW);
    lcd.begin(16, 8);
    lcd.setCursor(0,0);
    lcd.print("Normal Moisture ");
    lcd.setCursor(0,1);
    lcd.print("Pump is OFF");
    delay(2000);
    lcd.clear();
  }

}


void  LDR() {
  int ldr = analogRead(A1);
  Serial.println(ldr);
  
  if  (ldr <=200) {
    digitalWrite(light,HIGH);
    lcd.begin(16, 9);
    lcd.setCursor(0,0);
    lcd.print("Night is DET");
    lcd.setCursor(0,1);
    lcd.print("LED is ON");
    delay(2000);
    lcd.clear();
  }else{
    digitalWrite(light,LOW);
    lcd.begin(16, 10);
    lcd.setCursor(0,0);
    lcd.print("Day is DET");
    lcd.setCursor(0,1);
    lcd.print("LED is OFF");
    delay(2000);
    lcd.clear(); 
  }
}
