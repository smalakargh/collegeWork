#include <stdio.h>

void selectionSort(int Arr[],int Size){
    for(int i=0; i<Size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<Size; j++){
            if(Arr[j] < Arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = Arr[minIndex];
        Arr[minIndex] = Arr[i];
        Arr[i] = temp;
    }
}

// Code is written by Smalakar

void printSort(int Arr[],int Size){
    for(int i=0 ; i<Size-1; i++){
        printf("%d ", Arr[i]);
    }printf("\n");
}


int main(){
    int arr[] = {56,67,43,23,45,78,90,65,12,14,16,7,5,4};
    int size = sizeof(arr)/sizeof(arr[2]);

    printf("\nBefore Sorting : ");
    for(int i=0;i<size-1;i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    selectionSort(arr,size);
    printf("\nAfter Sorting : ");
    printSort(arr,size);

    printf("\n");
    
    return 0;
}

// Code is written by Smalakar
