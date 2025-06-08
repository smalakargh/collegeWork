#include <stdio.h>
//right-angled-triangle
int main() {
    int i,j;
    int num = 5; //Number star to be printed;
    for(i=0;i<=num;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}