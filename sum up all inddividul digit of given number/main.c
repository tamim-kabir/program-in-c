#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, rem ;
    printf("Enter a integer number: ");
    scanf("%d", &n);

    while(n != 0){

        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("Sum of the individual digit of an entered number is %d\n", sum);
    return 0;
}

