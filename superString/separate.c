#include <stdio.h>

int main(){
    char str[] = "Smalakar";
    int size = sizeof(str)/sizeof(str[0]);

    for(int i=0; i<size; i++){
        printf("%c\n", str[i]);
    }
    printf("Successfully Run!!!");
    return 0;
}