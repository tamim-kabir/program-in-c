#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color fo");
    int i, j, n;
    printf("Enter the row of triangle: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}
