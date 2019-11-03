#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Please enter 3 number : ");
    scanf("%f%f%f", &a, &b, &c);
    if(a >= b && a >= c){
        printf("\n The largest number is %.1f ", a);
    }
    if(b >= a && b >= c){
        printf("\n The largest number is %.1f ", b);
    }
    if(c >= a && c >= b){
        printf("\n The largest number is %.1f ", c);
    }

    return 0;
}
