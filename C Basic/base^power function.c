#include <stdio.h>
#include <math.h>

void powerFunction (int num); //function declertion

int main()
{
int num;
powerFunction(num); //call function
return 0;
}

void powerFunction (int num) //function defination
{
//input base and power for base^power = ?
double base, total;
int power;
printf("Enter base number :");
scanf("%lf",&base);
printf("Enter power number :");
scanf("%d",&power);
// base^power and print
total = pow(base, power);
printf("%.0lf^%d = %.0lf \n",base, power, total);
}