#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pn(int n){ //pn = prime number
    int i, root;
    if(n < 2){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    if(n % 2 == 0){
        return 0;
    }
    root = sqrt(n);
    for(i = 3; n <= root; i = i + 2){
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
        printf("Please Enter A Number( Or Enter 0 for Exit) : ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(1 == pn(n)){
            printf("\t%d\t This is a prime number", n);
        }else{
            printf("\t%d\t This not a prime number", n);
        }
        return 0;
    }
    return 0;
}
