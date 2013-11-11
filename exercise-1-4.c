#include <stdio.h>

/* F=32+9*C/5 */ 

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius\t\tFahrenheit\n");

    while(celsius <= upper) {
        fahr = 32.0 + 9.0 * celsius / 5.0;
        printf("%3.2f\t\t%3.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
