#include <stdio.h>

// Binary Search Function
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)  
            return mid;
            
        if (arr[mid] < target)   
            left = mid + 1;
        else                     
            right = mid - 1;
    }

    return -1;  // Executes when Element Not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};  // Sorted Array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
