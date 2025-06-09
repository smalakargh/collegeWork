## Factorial
```c
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
```

## Fibonacci
```c
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
```
## Ackermann-Function
```c
    #include <stdio.h>
int Akd(int m, int n){
    if(m==0) return n+1;
    if(n==0) return Akd(m-1,1);
    return Akd(m-1,Akd(m,n-1));
}
int main(){
   int m,n;
   printf("Enter Value of m,n : ");
   scanf("%d %d",&m,&n);
   int res = Akd(m,n);
   printf("%d",res);
   return 0;
}
```
## Contact
Maintained by Smalakar.  
[![Smalakar LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5)](https://www.linkedin.com/in/supriyomalakar/)


