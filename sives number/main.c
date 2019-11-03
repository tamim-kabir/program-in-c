#include <stdio.h>
#include <math.h>

const int size = 50;
char ara[];

void print_ara()
{
    int i;
    for(i = 2; i < size; i++){
        printf("%4d", ara[i]);
    }
    for(i = 2; i < size; i++){
        printf("-");
    }
    for(i = 2; i < size; i++){
        printf("%4d", i);
    }
    printf("\n\n\n");
}

void sieve(){
    int i, j, root;
    for(i = 2; i <= size; i++){
        ara[i] = 1;
    }
    root = sqrt(size);
    print_ara();
    for(i = 2; i <= root; i++){
        if(ara[i] == 1){
            for(j = 2; i * j <= size; j++){
               ara[i * j] = 0;
            }
            print_ara();
        }
    }

}
int is_prime(int n){
    if(n < 2){
        return 0;
    }
    return ara[n];
}

int main()
{
    int n, m;
    sieve();
    while(1){
        printf("Please Enter a number( or enter 0 exit) : ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(n >= size){
            printf("The number should be less then size%s", size);
            continue;
        }
        if(1 == is_prime(n)){
            printf("%d Is a prime number\n", n);
        }else{
            printf("%d is not a prime number\n", n);
        }
    }



    return 0;
}

