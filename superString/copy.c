// Write a Program in C to copy One string to Another without using Built in Function.


#include <stdio.h>
int main(){
    char str[] = "Something";
    char anth[50] = "";
    for(int i=0; str[i] !='\0'; i++){
        anth[i] = anth[i] + str[i] ;
    }
    for(int i=0; anth[i]!='\0'; i++){
        printf("%c",anth[i]);
    }

    return 0;
}