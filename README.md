# Joystick Controlled Servo

This project uses a joystick to control the position of a servo motor. The joystick’s analog input is read by the Arduino, mapped to a servo angle (0° to 180°), and sent to the servo to adjust its position.

## Components Required:
- Arduino (e.g., Uno, Nano)
- Servo Motor
- Joystick Module
- Jumper Wires
- Breadboard (optional)

## Circuit Diagram:
1. **Joystick**:
   - VCC → 5V (Arduino)
   - GND → GND (Arduino)
   - **Analog Output (A0)** → A0 (Arduino)

2. **Servo**:
   - Signal → PWM Pin (2)
   - VCC → 5V (Arduino or external power supply)
   - GND → GND (Arduino)

How It Works:
The joystick’s analog value (0-1023) is read by the Arduino.
The value is mapped to a range of 0° to 180°.
The servo motor’s angle is adjusted accordingly.
The loop runs continuously, updating the servo position as the joystick is moved.
Notes:
For higher-power servos, use an external power source for the servo and ensure a common ground with the Arduino.
Adjust the delay time for smoother or faster response.
License:
This project is open source and can be freely modified and shared.











