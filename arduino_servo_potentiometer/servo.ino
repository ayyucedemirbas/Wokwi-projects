#include <Servo.h>

Servo sr;
void setup() {
  int sr_pin = 9;
  sr.attach(sr_pin);  
}

void loop() {
  int read_pin = analogRead(0);            // 0-1023 scale 
  int val = map(read_pin, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  sr.write(val);                  
  delay(5);                           
}

