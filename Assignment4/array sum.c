#include <stdio.h>

int main() {
    int n = 3;
    int arr[] = {6, 7, 8};
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum is: %d\n", sum);

    return 0;
}
