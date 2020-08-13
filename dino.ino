#include <Servo.h>

#define SERVO 6
#define threshold 290
#define pinLDR A0

Servo s;

void setup()
{
  pinMode(pinLDR, INPUT);

  s.attach(SERVO);
  s.write(0);
  delay(3000);
}
void loop()
{
  // delay(1);
  if (analogRead(pinLDR) > threshold)
  {
    s.write(30);
    delay(100);
    s.write(0);
  }
}
