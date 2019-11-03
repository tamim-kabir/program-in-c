#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pn(int n)
{
    int i;
    if(n < 2){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    if(n % 2 == 0){
        return 0;
    }
    for(i = 3; i <= n / 2; i = i + 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    while(1){
        printf("Please Enter A Number(Or Enter o for exit) : ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(1 == pn(n)){
            printf("\t%d\t This Is A Prime Number\n", n);
        }else{
            printf("\t%d\t This Is Not A Prime Number\n", n);
        }
        break;
    }
    return 0;
}
