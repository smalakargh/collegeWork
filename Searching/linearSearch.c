#include <stdio.h>

void linearSearch(int Arr[],int size,int key){
    int found = 0;
    for(int i=0; i<size-1; i++){
        if(Arr[i] == key){
            printf(" %d Found @ index : %d",Arr[i], i);
            found = 1;
        }
    }
    if(found == 0){
        printf(" %d Not Found !!!", key);
    }
}

int main(){
    int arr[] = {87,54,23,76,45,89,67,76,43,245};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    printf("\nEnter any Number : ");
    scanf(" %d", &key);

    linearSearch(arr,size,key);
    
    return 0;
}