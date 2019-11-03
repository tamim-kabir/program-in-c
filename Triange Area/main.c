#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*a program for calculate creating
Triangle with 3 Line if is possible or not
*/
int main()
{
    float a, b, c, s, ta; // ta = triangle area
    printf("Enter the value of line 1 or a:");
    scanf("%f", &a);
    printf("Enter the value of line 2 or b:");
    scanf("%f", &b);
    printf("Enter the value of line 3 or c:");
    scanf("%f", &c);
    if((a + b) > c && (b + c) > a &&(c + a) > b){
        s = (a + b + c) / 2;
        ta = sqrt((s * (s - a) * (s - b ) * (s - c)));
        printf("The triangle is possible & area is = %f", ta);
    }else{
        printf("The triangle is not possible");
    }
    return 0;
}
