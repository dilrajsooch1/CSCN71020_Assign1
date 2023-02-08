#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

    printWelcomeMenu();

    printOptions();

    int inputNum;

    printf("Enter operation number: ");
    scanf("%1o", &inputNum);

    switch (inputNum)
    {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
    }

}

void printWelcomeMenu() {
    printf(" **********************\n");
    printf("**   Welcome to the   **\n");
    printf("**   BCS Calculator   **\n");
    printf(" **********************\n");
}

void printOptions() {
    printf("1. Add\n");
    printf("2. Subtract\n");
}

void add() {
    double num1, num2,num3, result;
    printf("Enter the first value:");
    scanf("%lf", &num1);
    printf("Enter the second value:");
    scanf("%lf", &num2);
    printf("Enter the third value:");
    scanf("%lf", &num3);
    result = num1 + num2+num3;
    printf("%lf + %lf+ %lf = %lf\n", num1, num2, num3, result);
}

void subtract(){
    double num1, num2,num3, result;
    printf("Enter the first value:");
    scanf("%lf", &num1);
    printf("Enter the second value:");
    scanf("%lf", &num2);
    printf("Enter the third value:");
    scanf("%lf", &num3);
    result = num1 - num2-num3;
    printf("%lf - %lf- %lf = %lf\n", num1, num2, num3, result);

}