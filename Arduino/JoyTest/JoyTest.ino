#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_JOYSTICK,
  0, 0,                  // Button Count, Hat Switch Count
  true, true, true,     // X, Y, Z
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

void setup() {
  //Serial.begin(115200);
  // Initialize Joystick Library
  Joystick.begin();
//  Joystick.setXAxisRange(-1, 1);
//  Joystick.setYAxisRange(-1, 1);
}

void loop() {
  //delay(100);
  Joystick.setXAxis(analogRead(A0));
  Joystick.setYAxis(analogRead(A1));
  Joystick.setZAxis(analogRead(A2));
//  Serial.print(analogRead(A0));
//  Serial.print(' ');
//  Serial.print(analogRead(A1));
//  Serial.print(' ');
//  Serial.print(analogRead(A2));
//  Serial.println();
}
