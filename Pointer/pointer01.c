#include <stdio.h>

int main(){
    int arr[] = {3,4,2,1,5,7,8,12,14,22,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr,sum = 0;
    for(int i=0; i<size; i++){
        sum += *(ptr + i);
    }
    printf("Addition Of All Element in the Array : %d", sum);

    return 0;
}