#include <Wyliodrin/udooConfig.h>
#include <Wyliodrin/wiring.h>

int main() 
{
	printf("We are going to test the PWM functionality on the UDOO board..\n\n");
    wiringSetup();
    int pin, value = 0;
    printf("pin to setup for analogOut:");
    scanf("%d", &pin);
    while (1) {
        if (value < 0 || value > 255) 
            printf("value must be [0, 255]\n");
        else {
            printf("value for the pin: ");
            scanf("%d", &value);
            analogWrite(pin, value);
        }
    }
    return 0;
}
