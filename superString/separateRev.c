// Write a Program in C to Separate Each Chareacter from String and Print it in Reverse Order.



#include <stdio.h>

int main(){
    char str[] = "Smalakar";
    int size = sizeof(str)/sizeof(str[0]);
    for(int i=size; i>=0; i--){
        printf("\n%c",str[i]);
    }
    return 0;
}