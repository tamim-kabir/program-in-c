#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    char s[1002], word[100];
    int i, j, length, iws; //iws: The word is started.
    gets(s);
    length = strlen(s);
    iws = 0;

    for(i = 0, j = 0; i <= length; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(iws == 0){
                iws = 1;
                word[j] = 'A' + s[i] - 'a'; //first character is capital
                j++;
            }
            else{
            word[j] = s[i];
            j++;
        }
    }



    else if(s[i] >= 'A' && s[i] <= 'Z'){
        if(iws == 0){
            iws = 1;
        }
        word[j] = s[i];
        j++;
    }
    else if(s[i] >= '0' && s[i] <='9'){
        if(iws == 0){
            iws = 1;
        }
        word[j] = s[i];
        j++;
    }else{
        if(iws == 1){
            iws = 0;
            word[j] = '\0';
            printf("%s\n", word);
            j = 0;
        }
    }
    }
    return 0;
}

