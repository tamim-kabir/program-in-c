#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 3F");
    char che;
    printf("Enter any key: ");
    che = getchar();

    if(isdigit(che) > 0){
        printf("\nYou type a digit");
    }
    if(islower(che) > 0){
        printf("\nYou type a lower case latter");
    }
    if(isupper(che) > 0){
        printf("\nYou type a upperr ccasee latter");
    }
    if(ispunct(che) > 0){
        printf("\nYou type a punction ");
    }
    if(isalpha(che) > 0){
        printf("\nYou type a alphabetic ");
    }
    if(isalnum(che) > 0){
        printf("\nYou type a alphanumeric");
    }
    return 0;
}
