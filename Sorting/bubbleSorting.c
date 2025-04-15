#include <stdio.h>

void bubbleSort(int Arr[],int Size){
    for(int i=0; i < Size-1 ; i++){
        for(int j=0; j < Size-1-i; j++){
            if(Arr[j] > Arr[j+1]){
                Arr[j] = Arr[j] + Arr[j+1];
                Arr[j+1] = Arr[j] - Arr[j+1];
                Arr[j] = Arr[j] - Arr[j+1];
            }
        }
    }
}

void printSort(int Arr[],int Size){
    for(int i=0; i < Size-1; i++){
        printf("%d ", Arr[i]);
    }printf("\n");
}

int main(){
    int arr[] = {87,54,23,76,45,89,67,76,43,245};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nBefore Sorting :\n");
    for(int i=0 ; i < size-1; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    bubbleSort(arr,size);
    printf("\nAfter Sorting : \n");
    printSort(arr,size);

    printf("\n");

    return 0;
}