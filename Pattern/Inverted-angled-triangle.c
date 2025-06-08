#include <stdio.h>
int main() {
    int i,j;
    int num=5;
    for(i=num;i>0;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}