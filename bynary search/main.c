#include <stdio.h>
#include <stdlib.h>

int main()
{
    int by_s[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_index = 0;
    int high_index = 15;
    int mid_index;
    int num;
    printf("For bynary search pot the value:");
    scanf("%d", &num);
        while(low_index <= high_index){
            mid_index=(low_index + high_index)/2;
            if(num == by_s[mid_index]){
                    break;
            }
            if(num < by_s[mid_index]){
                high_index = mid_index - 1;
            }else{
                low_index = mid_index + 1;
            }
        }
            if(low_index > high_index){
                printf("%d The number not in this array", num);
            }else{
                printf("%d is found in the array. It is the %d th element of the array.\n", num, mid_index);
            }

    return 0;
}
