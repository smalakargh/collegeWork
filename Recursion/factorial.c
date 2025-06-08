#include <stdio.h>
int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
   int num;
   printf("Enter Number for Factorial! : ");
   scanf("%d",&num);
   int result = factorial(num);
   printf("%d",result);
   return 0;
}