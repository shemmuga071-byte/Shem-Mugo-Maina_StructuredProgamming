#include <stdio.h>

int main() {
    int n = 3;
    int arr[] = {37, 24, 40};
    int i, max, min;

    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
