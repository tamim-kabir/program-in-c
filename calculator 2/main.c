#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*---------- Global variable -------------*/
int i, input3, input4;
double input, input2 ;
/*--- for Calculator function prototype---*/
int calculatorFunction();
/*--- for Addition function prototype---*/
void addition();
/*--- for Subtraction function prototype---*/
void subtraction();
/*--- for Multiplication function prototype---*/
void multiplication();
/*--- for Division function prototype---*/
void division();
/*--- for Modulus function prototype---*/
void modulus();
/*--- for Square function prototype---*/
void squreOfNumber();
void cubeOfNumber();
void powerOfXNumber();
/*--- for Root function prototype---*/
void squareRoot();
void cubeRoot();
void nthroot();
/*--- for Prime number function prototype---*/
void primeNumber();
int pn(int n);
/*--- for Factorial function prototype---*/
void factorial();
/*--- for Temperature function prototype---*/
void tempCelsious();
void tempFahrenheit();


int main()
{
    system ("color 3f");
    char inputFromUser;
    calculatorFunction();
    while(1)
    {
        printf("\nEnter the calculator Operator:");
        inputFromUser=getche();
        switch(inputFromUser)
        {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '?':
            modulus();
            break;
        case 'j':
            squreOfNumber();
            break;
        case 'k':
            cubeOfNumber();
            break;
        case '^':
            powerOfXNumber();
            break;
        case 's':
            squareRoot();
            break;
        case 'c':
            cubeRoot();
            break;
        case '|':
            nthroot();
            break;
        case 'p':
            primeNumber();
            break;
        case '!':
            factorial();
            break;
        case 't':
        case 'T':
            tempCelsious();
            break;
        case 'f':
        case 'F':
            tempFahrenheit();
            break;
        case 'H':
        case 'h':
            calculatorFunction();
            break;
        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'd':
        case 'D':
            system("cls");
            calculatorFunction();
            break;
        case 'r':
        case 'R':
            fflush(stdin);
            system("cls");
            calculatorFunction();
            break;
        default :
            system("cls");
            printf("\n\n-------You have entered unavailable option---------");
            printf("\n--Please Enter any one of below available options--\n\n");
            calculatorFunction();
        }
    }
    return 0;
}
/*---Calculator function beginning ---*/
int calculatorFunction()
{
    printf("\n-------------Press 'Q' to quit the program--------------------\n");
    printf("-------------Press 'H' to display below options---------------\n");
    printf("----Press 'D' to clear the screen & show Calculator option----\n");
    printf("---Press 'R' to flush input buffer & show Calculator option---\n\n");

    printf("Enter + for Addition \n");
    printf("Enter - for Subtraction \n");
    printf("Enter * for Multiplication \n");
    printf("Enter / for Division \n");
    printf("Enter ? for Modulus\n");
    printf("Enter j for square \n");
    printf("Enter k for cube \n");
    printf("Enter ^ for power \n");
    printf("Enter s for square Root \n");
    printf("Enter c for cube Root \n");
    printf("Enter | for nth Root \n");
    printf("Enter p for check prime number \n");
    printf("Enter ! for Factorial  \n");
    printf("Enter t for Celsius  \n");
    printf("Enter f for Fahrenheit  \n");
}
/*---Addition function beginning ---*/
void addition()
{
    double sum=0;
    printf("\n\nEnter the number of element: ");
    scanf("%lf", &input);
    printf("\nEnter %.0lf No. one by one :", input);
    for(i=1; i<=input; i++)
    {
        scanf("%lf", &input2);
        sum += input2;
    }
    printf("= %.2lf", sum);
}
/*---Subtraction function beginning ---*/
void subtraction()
{
    double sum=0;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &input);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &input2);
    sum = input - input2;
    printf("= %.2lf", sum);

}
/*---Multiplication function beginning ---*/
void multiplication()
{
    double sum=0;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &input);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &input2);
    sum = input*input2;
    printf("= %lf", sum);
}
/*---Division function beginning ---*/
void division()
{
    double sum=0;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &input);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &input2);
    sum = input/input2;
    printf("= %lf", sum);
}
/*--- Modulus function beginning ---*/
void modulus()
{
    double sum=0;
    printf("\n\nEnter 1 No.: ");
    scanf("%d", &input3);
    printf("\nEnter 2 No.: ");
    scanf("%d", &input4);
    sum = input3 % input4;
    printf(" = %.0lf", sum);
}
/*--- Square function beginning ---*/
void squreOfNumber()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    sum = input*input;
    printf(" = %.2lf", sum);
}
void cubeOfNumber()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    sum = input*input*input;
    printf(" = %.2lf", sum);
}
void powerOfXNumber()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    printf("\nPower: ");
    scanf("%d", &input3);
    sum = pow(input, input3);
    printf(" = %.2lf", sum);
}

/*--- Root function beginning ---*/
void squareRoot()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    sum=sqrt(input);
    printf(" = %lf", sum);
}
void cubeRoot()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    sum = cbrt(input);
    printf(" = %lf", sum);
}
void nthroot()
{
    double sum=0;
    printf("\n\nNumber: ");
    scanf("%lf", &input);
    printf("\nRoot Power: ");
    scanf("%d", &input3);
    sum = (pow (input, 1.0/input3));
    printf(" = %lf", sum);

}
/*--- Prime Number function beginning ---*/
void primeNumber()
{
    printf("\n\nPlease Enter a number to check prime Number: ");
    scanf("%d", &input3);
    if(input3 == 0 || input3 <2)
    {
        printf("\nplease enter a number greater then 2 to find a prime number\n");
    }
    else if(input3==2)
    {
        printf("\n%d is a prime number\n", input3);
    }
    else if(1 == pn(input3))
    {
        printf("\n%d is a prime number\n", input3);
    }
    else
    {
        printf("\n%d is not a prime number\n", input3);
    }
}
int pn(int n)
{
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
/*--- Factorial function beginning ---*/
void factorial()
{
    int sum=1;
    printf("\nEnter a positive number to find factorial : ");
    scanf("%d",&input3);
    if (input3<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
    }
    for(i=1; i<=input3; i++)
    {
        sum = sum * i;
    }
    printf("\n");
    printf("Factorial of entered number %d is:%d\n", input3, sum);
}
/*--- Temperature conversion functions beginning ---*/
void tempCelsious()
{
    double Celsius;
    printf("\nTemperature in Fahrenheit: ");
    scanf("%lf", &input2);
    Celsius = (input2-32.0)/1.8;
    printf("\nCelsius: %.2lf C'", Celsius);
}
void tempFahrenheit()
{
    double Fahrenheit;
    printf("\nTemperature in Celsius: ");
    scanf("%lf", &input2);
    Fahrenheit = (input2*1.8)+32;
    printf("\nCelsius: %.2lf F'", Fahrenheit);
}
