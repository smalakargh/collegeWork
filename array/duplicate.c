#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 4, 8, 2, 7, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
