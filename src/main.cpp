#include <Arduino.h>

#define SW4 4 //GPIO4
#define SW15 15 //GPIO15
#define LED16 16 //GPIO16
#define LED17 17 //GPIO17
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("This is setup code");
  pinMode(SW4,INPUT);  //touchread GPIO4
  pinMode(SW15,INPUT);
  pinMode(LED16,OUTPUT);
  pinMode(LED17,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 
if(touchRead(SW4) < 50)
  {
    Serial.print("This is Touch Read code SW4 ดับ: ");
    Serial.println(touchRead(SW4));
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(LED17,LOW);
  }
  else{
    Serial.print("This is Touch Read code SW4 ติด: ");
    Serial.println(touchRead(SW4));
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(LED17,HIGH);
  }
   delay(500); //1 second

  
  if(touchRead(SW15) < 50)
  {
    Serial.print("This is Touch Read code SW15 ดับ: ");
    Serial.println(touchRead(SW15));
    digitalWrite(LED16,LOW);
  }
  else{
    Serial.print("This is Touch Read code SW15 ติด: ");
    Serial.println(touchRead(SW15));
    digitalWrite(LED16,HIGH);
  }
   delay(500); //1 second
}