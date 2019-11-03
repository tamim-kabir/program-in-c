#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color F0");
    char character;
    character = ' ';
    while(character != '\n'){
        character = getchar();
    }
    printf("%s", character);
    return 0;
}
