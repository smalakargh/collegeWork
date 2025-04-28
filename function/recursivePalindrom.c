#include <stdio.h>

int reverse(int num, int rev){
    if(num==0){
        return rev;
    }
    return reverse(num/10,rev*10+(num%10));
}

int ispalindrom(int num){
    return num == reverse(num, 0);
}

int main(){
    printf("Numbers from 1 to 1000\n");
    for(int i=0; i<1000; i++){
        if(ispalindrom(i)){
            printf("%d ", i);
        }
    }
    return 0;
}