#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 4, 8, 2, 7, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int odd[size], even[size];
    int evenCount = 0, oddCount = 0; 

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i]; 
        } else {
            odd[oddCount++] = arr[i]; 
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    
    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

