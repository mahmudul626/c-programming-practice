#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct student
{
    char name[100];
    int roll;
    char depertment[1000];
} std;


int AddStudent(std info) {
    printf("\t Add New Student \n");
    printf("\n");
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    if (fptr == NULL)
    {
        printf("File doesn't exit \n");
        return 1;
    }
    printf("Enter Name : ");
    scanf("%s", info.name);
    printf("Enter Roll : ");
    scanf("%d", &info.roll);
    printf("Enter Depertment : ");
    scanf("%s", info.depertment);
    fprintf(fptr, "Name : %s \n", info.name);
    fprintf(fptr, "Roll : %d \n", info.roll);
    fprintf(fptr, "Depertment : %s \n", info.depertment);
    fclose(fptr);
    printf("\n");
    printf("The data has been added successfully. \n");
}
int EnterResult(int num) {
    // mark input
    int marks[3]; 
    int sum = 0;
    printf("\t Enter Marks \n");
    printf("\n");
    printf("Bangla : ");
    scanf("%d", &marks[0]);
    printf("English : ");
    scanf("%d", &marks[1]);
    printf("Math : ");
    scanf("%d", &marks[2]);
    int len = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < len; i++)
    {
       sum += marks[i];
    }
    float persent = ((float)sum / 300.0) * 100;
    //data page e transfer code
    FILE *fptr;
    fptr = fopen("student.txt", "a");
    fprintf(fptr, "\t_______\n");
    fprintf(fptr, "\t Marks \n");
    fprintf(fptr, "\t-------\n");
    fprintf(fptr, "Bangla \t English \t Math \n");
    fprintf(fptr, " %d \t    %d \t         %d \n", marks[0], marks[1], marks[2]);
    //persentage culcolation
    if (persent >= 33.00 && persent <= 39.00) {
        fprintf(fptr, "LG : D \t GPA : 1.00 \n");
    } else if (persent >= 40.00 && persent <= 49.00) {
        fprintf(fptr, "LG : C \t GPA : 2.00 \n");
    } else if (persent >= 50.00 && persent <= 59.00) {
        fprintf(fptr, "LG : B \t GPA : 3.00 \n");
    } else if (persent >= 60.00 && persent <= 69.00) {
        fprintf(fptr, "LG : A- \t GPA : 3.50 \n");
    } else if (persent >= 70.00 && persent <= 79.00) {
        fprintf(fptr, "LG : A \t GPA : 4.00 \n");
    } else if (persent >= 80.00 && persent <= 100.00) {
        fprintf(fptr, "LG : A+ \t GPA : 5.00 \n");
    } else {
        fprintf(fptr, "LG : F \t GPA : 0.00 \n");
    }
    
    
    fclose(fptr);   
}
void ViewResult(int num) {
    printf("\t View Results \n");
    FILE *fptr;
    fptr = fopen("student.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    
    fclose(fptr);
}
void DeleteRecord(int num) {
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    fprintf(fptr, "\n");
    fprintf(fptr, "\tData Not Found");
    printf("Deleting");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf("\n");
    printf("Done");
    fclose(fptr);
}
int main()
{
    std info;
    int num;
    int n,marks[3];
    printf("\t Student Result Management System \n");
    printf("\t----------------------------------\n");
    printf("1. Add New Student \n");
    printf("2. Enter Results \n");
    printf("3. View Results \n");
    printf("4. Delete Student Record \n");
    printf("5. Exit \n");
    printf("Enter : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        AddStudent(info);
        main();
        break;
    case 2:
        EnterResult(num);
        main();
        break;
    case 3:
        ViewResult(num);
        main();
        break;
    case 4:
        DeleteRecord(num);
        main();
        break;
    
    case 5:
        printf("Exiting");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        break;
    default:
        printf("This option does not available");
        break;
    }
    return 0;
}