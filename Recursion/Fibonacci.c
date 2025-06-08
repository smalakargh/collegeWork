#include <stdio.h>
int fibonacci(int num){
    if(num==0) return 0;
    if(num==1) return 1;
    return num+fibonacci(num-1);
}
int main(){
   int num;
   printf("Enter Number for Fibonacci : ");
   scanf("%d",&num);
   int result = fibonacci(num);
   printf("%d",result);
   return 0;
}