#include <stdio.h>

int main() {
    int arr[100];
    int i, x, size;

    // Taking input for the number of elements
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &size);

    if (size > 100 || size <= 0) {
        printf("Invalid array size! Please enter a value between 1 and 100.\n");
        return 1;
    }

    // Taking input for sorted array
    printf("Enter %d elements in sorted order:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &x);

    int low = 0, high = size - 1, found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            found = 1;
            printf("Element %d found at index %d\n", arr[mid], mid);
            break;
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found!\n", x);
    }

    return 0;
}
