#include <stdio.h>

int main(){
    int num = 5;
    for(int i=0;i<=num;i++){
        for(int k=num;k>i;k--){
            printf(""); // '0' space = Left-shifted || '1' space = Centre || '2' space = Right-shifted
        }
        for(int j=0; j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}