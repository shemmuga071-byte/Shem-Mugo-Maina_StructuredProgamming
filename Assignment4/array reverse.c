#include <stdio.h>

int main() {
    int n = 3;
    int arr[] = {6, 7, 8};
    int i;

    printf("The values stored in the array are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values stored in the array in reverse are: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
