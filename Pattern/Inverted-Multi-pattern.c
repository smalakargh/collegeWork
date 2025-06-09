#include <stdio.h>

int main(){
    int num = 5;
    for(int i=num;i>0;i--){
        for(int k=num; k>i;k--){
            printf("");// '0' space = Inv-Left-shifted || '1' space = Inv-Centre || '2' space = Inv-Right-shifted
        }
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}