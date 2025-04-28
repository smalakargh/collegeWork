#include <stdio.h>
int ispalindrome(int num){
    int original = num;
    int rev = 0;
    while(num>0){
        int digit = num % 10;
        rev = rev*10 + digit;
        num = num/10; 
    }
    return original == rev;
}
int main(){
    printf("Palindrome Numbers From 1 to 500\n");
    for(int i=1; i<500; i++){
        if(ispalindrome(i)){
            printf("%d ",i);
        }
    }printf("\n");
    return 0;
}