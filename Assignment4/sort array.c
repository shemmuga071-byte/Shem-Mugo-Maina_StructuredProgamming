#include <stdio.h>

int main() {
    int n = 5;
    int arr[] = {2, 7, 4, 5, 9};
    int i, j, temp;

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
