/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
#define Rojo 3
#define Verde 4
#define Buzzer 5

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Rojo, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Verde, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)

  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000);  
  delay(1000);  
  delay(1000); 
  delay(1000); 
     digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600); 
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(Rojo, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(Rojo, HIGH);    // turn the LED off by making the voltage LOW
  delay(300); 
   digitalWrite(Rojo, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
   digitalWrite(Rojo, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);
     digitalWrite(Rojo, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
   digitalWrite(Rojo, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(Rojo, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Verde, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
  delay(1000); 
    digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
     digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
  delay(700); 
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
    delay(700); 
    digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
  delay(700); 
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
  delay(700); 
  digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW 
  digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600); 
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
   digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
   digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
     digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
   digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   delay(300); 
   digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);
   digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   delay(150); 
   digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(150);
     digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
   delay(150); 
   digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(150);
    digitalWrite(Verde, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, LOW);   // turn the LED on (HIGH is the voltage level)
      delay(150); 
   digitalWrite(Verde, HIGH);    // turn the LED off by making the voltage LOW
   digitalWrite(Buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100); 


}
