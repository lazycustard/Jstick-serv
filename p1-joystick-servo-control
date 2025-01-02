#include<servo.h>
#define Servo_Pin 2
Servo myServo;

void setup(){

myServo.attach(Servo_Pin); 
void loop()
{
 int joystickValue = analogRead(A0);
 int output = map(joystickValue, 0, 1023, 0, 180);
 myServo.write(output);
 delay(20);
}
