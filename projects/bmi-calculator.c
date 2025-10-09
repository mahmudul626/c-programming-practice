#include <stdio.h>

//Simple BMI Calculator Created By Md. Mahmudul Hasan Mabud 

int main() {
    
    //input part
    
    int feet,inc,weight,height;
    float meter,sqr,bmi;
    printf("write your height s feet :");
    scanf("%d",&feet);
    printf("write your height s inc :");
    scanf("%d",&inc);
    printf("write your weight :");
    scanf("%d",&weight);
    
    //calculating part
    
    height = feet * 12 + inc;
    meter = height * 0.0254;
    sqr = meter * meter;
    bmi = weight / sqr;
    
    printf("Your BMI is %.1f\n",bmi);
    
    // BMI Category Part
    
    if(18.5<=bmi) {
        if(24.9>=bmi) {
            printf("normal");
        }
        else if (29.9>= bmi) {
            printf("over weight");
        }
        else {
        printf("obesity");
        }
    }
    else {
        printf("under weight");
    }
    
    return 0;
}
