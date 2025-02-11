#include <stdio.h>
#include <unistd.h>

int rectifire();
float phone();
float laptop();
float tablet();
void controler();

int main()
{
    int inputV = 230;
    char love = 3.7;
    printf("           Embedded Charging System \n");
    printf("          -------------------------- \n");
    printf("                                     \n");
    printf("Rectifing... \n%dv Ac to %dv Dc \n", inputV, rectifire());
    sleep(2);
    printf("Ready to Charge! \n");
    sleep(1);
    controler();
    printf("\n");
    printf("                                     \n");
    printf("                 Thank you %c \n", love);
    return 0;
}

void controler()
{
    printf("Note : These devices can only be used to charge phones, laptops, and tablets. \n");
    sleep(1);
    printf("Which ones can be charged? \n");
    sleep(1);
    printf("Enter p for Phone, l for laptop and t for tablet : ");
    char deviceN;
    float pbv = 3.7;
    float lbv = 14.8;
    float tbv = 7.4;
    
    scanf("%c", &deviceN);

    if (deviceN == 'p') {
        printf("Charging...\n");
        sleep(2);
        printf("Your phone's battery voltage is %.1fV, \nand it is currently charging at %.0fV.",pbv,phone());
    } else if (deviceN == 'l') {
        printf("Charging... \n");
        sleep(2);
        printf("Your laptop's battery voltage is %.1fV, \nand it is currently charging at %.1fV.",lbv,laptop());
    } else if (deviceN == 't') {
        printf("Charging... \n");
        sleep(2);
        printf("Your tablet's battery voltage is %.1fV, \nand it is currently charging at %.1fV.",tbv,tablet());
    } else {
        printf("Try again");
    }
    
}

int rectifire() {
    int inputV = 230;
    float rectifyV = inputV / 9;
    return rectifyV;
} float phone() {
    float pbv = 3.7;
    return pbv + 1.3;
} float laptop() {
    float lbv = 14.8;
    return lbv + 1.3;
} float tablet() {
    float tbv = 7.4;
    return tbv + 1.3;
}
