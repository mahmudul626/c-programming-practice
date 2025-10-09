#include <stdio.h>


int main() {
    int fahr , ceusius, upper, lower, step;

    lower = 0;          //Lower limit of temperature table
    upper = 300;        //Upper limit
    step  = 20;         //Step size

    fahr = lower;
    while (fahr <= upper)
    {
        ceusius = 5 * (fahr - 32) / 9;
        printf("%3d %9d\n", fahr, ceusius);
        fahr = fahr + step;
    }
    return 0;
}