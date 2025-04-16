#include <stdio.h>

void insertionSort(int Arr[],int Size){
    for(int i=1; i<Size; i++){
        int key = Arr[i];
        int j = i - 1;
        while (j>=0 && Arr[j]>key){
            Arr[j + 1] = Arr[j];
            j=j-1;
        }
        Arr[j + 1]=key;
    }
}

void printSort(int Arr[],int Size){
    for(int i=0; i<Size; i++){
        printf("%d ",Arr[i]);
    }printf("\n");
}

int main(){
    int arr[] = {87,54,23,76,45,89,67,76,43,245};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nBefore Sorting :\n");
    for(int i=0 ; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    insertionSort(arr,size);
    printf("\nAfter Sorting: \n");
    printSort(arr,size);
}