#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*--- for calculator function prototype---*/
int calculatorFunction();
/*--- for Addition function prototype---*/
double addition();
/*--- for subtraction function prototype---*/
double subtraction();
/*--- for Multiplication function prototype---*/
double multiplication();
/*--- for Division function prototype---*/
double division();
/*--- for Modulus function prototype---*/
double modulus();
/*--- for square function prototype---*/
double powerOfXNumber();
double squreOfNumber(double a);
double cubeOfNumber(double a);
/*--- for root function prototype---*/
double nthroot();
double squareRoot(double a);
double cubeRoot(double a);

int main()
{
    system ("color 3f");
    char inputFromUser;
    calculatorFunction();
    while(1)
    {
        printf("\n\nEnter the calculator Operator:");
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
        case '^':
            powerOfXNumber();
            break;
        case '|':
            nthroot();
            break;
        case 'H':
        case 'h':
            calculatorFunction();
            break;
        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'c':
        case 'C':
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
    printf("\n----Press 'Q' or 'q' to quit the program----\n");
    printf("----Press 'H' or 'h' to display below options----\n");
    printf("Enter 'C' or 'c' to clear the screen and display available option \n\n");

    printf("Enter + for Addition \n");
    printf("Enter - for Subtraction \n");
    printf("Enter * for Multiplication \n");
    printf("Enter / for Division \n");
    printf("Enter ? for Modulus\n");
    printf("Enter ^ for Power \n");
    printf("Enter | for Root \n\n");
}
/*---Addition function beginning ---*/
double addition()
{
    double a, i, num, add=0;
    printf("\n\nEnter the number of element: ");
    scanf("%lf", &a);
    printf("\nEnter %.0lf No. one by one", a);
    for(i=1; i<=a; i++)
    {
        scanf("%lf", &num);
        add += num;
    }
    printf("= %.2lf", add);
}
/*---Subtraction function beginning ---*/
double subtraction()
{
    double a, b, sub;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &a);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &b);
    sub = a - b;
    printf("= %.2lf", sub);

}
/*---Multiplication function beginning ---*/
double multiplication()
{
    double a, b, mul;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &a);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &b);
    mul = a*b;
    printf("= %lf", mul);
}
/*---Division function beginning ---*/
double division()
{
    double a, b, div;
    printf("\n\nEnter 1 No.: ");
    scanf("%lf", &a);
    printf("\nEnter 2 No.: ");
    scanf("%lf", &b);
    div = a/b;
    printf("= %lf", div);
}
/*--- Modulus function beginning ---*/
double modulus()
{
    int a, b;
    float mod;
    printf("\n\nEnter 1 No.: ");
    scanf("%d", &a);
    printf("\nEnter 2 No.: ");
    scanf("%d", &b);
    mod = a%b;
    printf(" = %lf", mod);
}
/*--- Square function beginning ---*/
double powerOfXNumber()
{
    double num,p;
    int power;
    printf("\n\nNumber: ");
    scanf("%lf", &num);
    printf("\nPower: ");
    scanf("%d", &power);
    switch(power)
    {
    case 0:
        printf(" = 1");
        break;
    case 1:
        printf(" = %.1lf", num);
        break;
    case 2:
        p = squreOfNumber(num);
        printf(" = %.1lf", p);
        break;
    case 3:
        p = cubeOfNumber(num);
        printf(" = %.1lf", p);
        break;
    default:
        p = pow(num, power);
        printf(" = %.2lf", p);
    }
}
double squreOfNumber(double a)
{
    double squre;
    squre = a*a;
    return squre;
}
double cubeOfNumber(double a)
{
    double cube;
    cube = a*a*a;
    return cube;
}

/*--- Root function beginning ---*/
double nthroot()
{
    double x, p;
    int n;
    printf("\n\nNumber: ");
    scanf("%lf", &x);
    printf("\nRoot Power: ");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf(" = 1");
        break;
    case 1:
        printf("%lf", x);
        break;
    case 2:
        p= squareRoot(x);
        printf(" = %lf", p);
        break;
    case 3:
        p= cubeRoot(x);
        printf(" = %lf", p);
        break;
    default:
        p = (pow (x, 1.0/n));
        printf(" = %lf", p);
    }
}
double squareRoot(double a)
{
    double root;
    root=sqrt(a);
    return root;
}
double cubeRoot(double a)
{
    double croot;
    croot = cbrt(a);
    return croot;
}
