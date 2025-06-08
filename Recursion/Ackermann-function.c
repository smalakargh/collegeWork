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