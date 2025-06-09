#include <stdio.h>

int main(){
    int num = 5;
    for(int i=num;i>=0;i--){
        for(int k=num; k>i;k--){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        for(int m=num; m>i;m--){
            printf("");
        }
        for(int n=1;n<i;n++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}