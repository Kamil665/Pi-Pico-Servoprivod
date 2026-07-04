#include <Servo.h>

Servo servo;
int angle;

void setup() {
  servo.attach(15);
  servo.write(180);
}

void loop() {
  for (angle = 0; angle <= 180; angle++)
    {
       servo.write(angle);
       delay(5);
    }

    for (angle = 180; angle >= 0; angle--)
    {
      servo.write(angle);
      delay(5);
    }
}
