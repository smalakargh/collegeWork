// Disclaimer :: This code is littleBit Length, so may not be Understable Easily.
// Disclaimer :: If you have seen my previous Pattern printing Solutions, Then Easily you can UnderStand this Code.
// Disclaimer :: RUN this CODE in you computer.

#include <stdio.h>

int main(){
    int num = 10;
    for(int i=0;i<num;i++){
        for(int t=num;t>i;t--){
            printf("  ");
        }
        for(int e=0;e<i;e++){
            printf("# ");
        }
        for(int t=num;t>i;t--){
            printf("");
        }
        for(int e=1;e<i;e++){
            printf("& ");
        }
        printf("\n");
    }
    
    for(int i=num;i>=0;i--){
        for(int k=num; k>i;k--){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("@ ");
        }
        for(int m=num; m>i;m--){
            printf("");
        }
        for(int n=1;n<i;n++){
            printf("$ ");
        }
        printf("\n");
    }
    
    return 0;
}