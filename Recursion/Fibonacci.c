#include <stdio.h>
int fibonacci(int num){
    if(num==0) return 0;
    if(num==1) return 1;
    return num+fibonacci(num-1);
}
int main(){
    int num;
    printf("Enter any Number (fibonacci) :: ");
    scanf("%d",&num);
    printf("fibonacci of %d is %d",num,fibonacci(num));
    return 0;
}