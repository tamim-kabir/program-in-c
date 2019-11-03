#include <stdio.h>
#include <stdlib.h>

int pn(int n) // pn = Prime Number
{
    int i;
    if(n < 2){
        return 0;
    }
    for(i = 2; i < n; i++){
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
        printf("please Enter A Number(OR Enter 0 To Exit):");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(1 == pn(n)){
            printf("\t%d\t Is A prime Number\n", n);
        }else{
            printf("\t%d\t Is Not A Prime Number\n", n);
        }

    }
     return 0;
}
