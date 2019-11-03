#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact = 1, i, num;
    printf("Enter a number to find factorial:");
    scanf("%d", &num);
    if(num < 0){
        printf("You enter a 0 or negative number, pleasee enter a positive to find factorial again");
    }
    for(i = 1; i <= num; i++){
        fact = fact * i;
    }
    printf("\n");
    printf("Enter number is %d and it's factorial is %d", num, fact);
    return 0;

}
