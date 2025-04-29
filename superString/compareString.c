// Write a program in C to check, two string taken are same and also its length of both string.

#include <stdio.h>

void count(char str1[],char str2[]){
    int count1 = 0;
    while (str1[count1] != '\0') {
        count1++;
    }
    int count2 = 0;
    while (str2[count2] != '\0') {
        count2++;
    }
    printf("\nThe Length of 1st string: %d\n",count1);
    printf("The Length of 2nd string: %d\n",count2);
}
void compare(char str1[],char str2[]){
    int count = 0;
    for(int i=0; str1[i] != '\0'; i++){
        for(int j=0 ; str2[j] !='\0'; j++){
            if(str1[i] == str2[j]){
                count = 1;
            }
        }
    }
    if(count==1){
        printf("\nThe strings are Same !!!");
    }else{
        printf("\nDifferent");
    }
}
int main(){
    char str1[100],str2[100];
    printf("Enter any 1st random word: ");
    scanf(" %s",&str1);
    printf("Enter any 2nd random word: ");
    scanf(" %s",&str2);

    count(str1,str2);
    compare(str1,str2);

    return 0;
}