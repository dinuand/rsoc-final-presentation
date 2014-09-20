#include <Wyliodrin/udooConfig.h>
#include <Wyliodrin/wiring.h>
#include <Wyliodrin/Servo.h>

int main() 
{
    printf("Testing Servo on UDOO...\n\n");
    int pin;
    wiringSetup();
    Servo servo1 = Servo();
    printf("pin to attach servo:");
    scanf("%d", &pin);
    servo1.attach(pin);
    int _start, _middle, _end;
    _start = 0, _middle = 100, _end = 180;
    while (1) {
        printf("writing value %d to servo\n", _start);
        servo1.write(_start);
        delay(1000);
        printf("write value %d to servo\n", _middle);
        servo1.write(_middle);
        delay(1000);
        printf("write value %d to servo\n", _end);
        servo1.write(_end);
        delay(1000);
        printf("going back to %d...\n", _start);
        delay(1000);
    }
    return 0;
}
