#include <stdio.h>

int main(){
   int num = 10;
   int *ptr = &num;
   printf("Value of a: %d\n", num);
   printf("Address of a: %p\n", &num);
   printf("Pointer ptr stores address: %p\n", ptr);
   printf("Value pointed by ptr: %d\n", *ptr); 
   return 0;
}