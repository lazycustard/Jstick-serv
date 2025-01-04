#include <Servo.h>

#define Servo_Pin 2
Servo myServo;

void setup() {
    Serial.begin(9600);          
    myServo.attach(Servo_Pin);    
}

void loop() {
    int joystickValue = analogRead(A0);  
    int output = map(joystickValue, 0, 1023, 0, 180);  /
    
    Serial.print("Joystick Value: ");
    Serial.print(joystickValue);
    Serial.print("\t Servo Output: ");
    Serial.println(output);
    
    myServo.write(output);  
    delay(20);  /
}
