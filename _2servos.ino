#include <Servo.h>
Servo s1,s2;
void setup()
{
  s1.attach(9);
  s2.attach(10);
}
void loop()
{
  s1.writeMicroseconds(1000);
  s2.writeMicroseconds(1000);
  delay(1000);
  
  s1.writeMicroseconds(1250);
  s2.writeMicroseconds(1250);
  delay(1000);
  
  s1.writeMicroseconds(1500);
  s2.writeMicroseconds(1500);
  delay(1000);  
  
  s1.writeMicroseconds(1750);
  s2.writeMicroseconds(1750);
  delay(1000);  
  
  s1.writeMicroseconds(2000);
  s2.writeMicroseconds(2000);
  delay(1000);

  s1.writeMicroseconds(1750);
  s2.writeMicroseconds(1750);
  delay(1000);  

    
  s1.writeMicroseconds(1500);
  s2.writeMicroseconds(1500);
  delay(1000);
  
  s1.writeMicroseconds(1250);
  s2.writeMicroseconds(1250);
  delay(1000);
  
}
