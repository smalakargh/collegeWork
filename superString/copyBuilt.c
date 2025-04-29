// Write a Program in C to copy One string to Another using Built in Function.


#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "HelloMe";
    char cpystr[50];
    printf(strcpy(cpystr,str));
    return 0;
}