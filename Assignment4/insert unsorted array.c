#include <stdio.h>

int main() {
    int n = 4;
    int arr[5] = {1, 8, 7, 10};  // extra space for insertion
    int value = 5, pos = 2;
    int i;

    printf("The current list of the array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    printf("\nAfter insert the element the new list is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
