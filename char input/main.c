#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F0");
    char ans;
    printf("would you like too know our group name\n");
    printf("Enter 'Y' for yes or 'N' for no: ");
    ans = getchar();
    if(ans == 'Y' || ans == 'y'){
        printf("\nOur group name is Error\n");
    }else
    {
        printf("\nyou are a sili human bing\n");
    }
    return 0;
}
