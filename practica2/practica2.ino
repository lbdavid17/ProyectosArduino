#include <Servo.h>

Servo servo1;                        
int angulo = 0 ;
int pin=4;
void setup()
{
        servo1.attach(pin) ;             
}

void loop()
{
        for(angulo  = 0; angulo  <= 180; angulo  += 1)   
            {
                 servo1.write(angulo);
                 delay(15);
            }
        for(angulo  = 180; angulo  >=0; angulo  -=1 )    
            {
                 servo1.write( angulo );
                 delay(15);
            }
}
