#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

/* print Fahrenheit-Celsius table from 300 to 0*/

main() {
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
}
