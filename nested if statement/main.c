#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Nested if statement

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if(age <= 0){
        printf("\n Your not born\n");
    }
    if(age > 0 && age < 0){
        printf("\n You are child\n");
    }
    if(age > 12 && age < 18){
        printf("\nYou are teenager\n");
    }
    if(age > 18 && age < 40){
        printf("\nYou are young\n");
    }
    if(age > 40 && age < 60){
        printf("\nYou are old enough for die\n");
    }
    if(age > 60){
        printf("\n Wish your long life\n");
    }

    return 0;
}
