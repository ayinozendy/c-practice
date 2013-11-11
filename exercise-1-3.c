#include <stdio.h>

/* C=(5/9)(F-32) */

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main() {
    /* variable declaration */
    float fahr, celsius;
    int lower, upper, step;

    /* variable assignments */
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("***********************************\n");
    printf("*** Fahrenheit to Celsius Table ***\n");
    printf("***********************************\n\n");
    printf("Fahrenheit\tCelsius\n\n");

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.2f\t\t%3.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\n");

    return 0;
}
