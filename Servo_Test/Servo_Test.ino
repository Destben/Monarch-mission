#include <Servo.h>
Servo One;  //gives name to servo
int pos = 0;  // sets original position at zero
double a = 180;  //experiment with angle measurements between 0-180 for servo
void setup() {
  One.attach(12);  //attaches servo in pin12
  // put your setup code here, to run once:

}

void loop() {


  
  One.write(pos + a);  //changes angle of bottom servo to variable a
  delay(2000);  //waits 2 seconds
  One.write(pos );  //sets servo to original position
  delay(2000);
  

}
