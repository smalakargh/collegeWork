#include <stdio.h>
#define RESET   "\x1b[0m"
#define BLACK   "\x1b[30m"
#define BG_YELLOW  "\x1b[43m"

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf(BG_YELLOW BLACK "//-------Array-After-Reversing-------//\n" RESET);
    for(int i=size-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}