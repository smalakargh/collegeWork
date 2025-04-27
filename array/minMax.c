#include <stdio.h>

int main(){
    int arr[] = {3,54,33,66,32,45,89,1,666};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max=arr[0], min=arr[0];

    for(int i=1; i<size; i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    printf("Maximum Element : %d \n", max);
    printf("Minimum Element : %d \n", min);
    return 0;
}