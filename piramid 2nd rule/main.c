#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int row, col, n,temp;
    printf("Enter the row of piramid:");
    scanf("%d",&n);
    for(row = 1;row <= n; row++){
        for(col = 1; col < temp; col++){
            printf(" ");
        }
        temp--;

        for(col = 1; col <= (2 * row) - 1; col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
