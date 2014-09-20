#include <Wyliodrin/wiring.h>
#include <Wyliodrin/udooConfig.h>

int main() {

    printf("We are going to test the digital I/O part on UDOO...\n\n");
    wiringSetup();   
    int pin;
    printf("pin: ");
    scanf("%d", &pin);
    while (1) {

        printf("Setting pin %d to LOW\n", pin);
        digitalWrite(pin, LOW);
        delay(1000);
        printf("Setting pin %d to HIGH\n", pin);
        digitalWrite(pin, HIGH);
        delay(1000);
    }
}
