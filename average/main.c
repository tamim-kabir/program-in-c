#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, sum;
    float d;

    printf("enter 3 number : ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    d = (a + b + c)/3;
    printf("\n Sum is %d", sum);
    printf("\n average is %.2f\n", d);
    return 0;
}
