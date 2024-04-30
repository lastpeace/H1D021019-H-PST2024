#include <Arduino.h>
#include <Servo.h>

// put function declarations here:
Servo myservo;

void setup()
{
  // put your setup code here, to run once:
  myservo.attach(D4);
}

void loop()
{
  // put your main code here, to run repeatedly:
  myservo.write(90);
  delay(500);
  myservo.write(180);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(0);
  delay(500);

  for (int pos = 0; pos <= 180; pos += 1)
  {
    myservo.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    delay(15);
  }
}