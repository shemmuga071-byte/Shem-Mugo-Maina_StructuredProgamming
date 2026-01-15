#include <stdio.h>

int main() {
    int n = 3;
    int arr[] = {6, 2, 2, 8};
    int i, j, isUnique;

    printf("The unique are: ");
    for(i = 0; i < n; i++) {
        isUnique = 1;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
