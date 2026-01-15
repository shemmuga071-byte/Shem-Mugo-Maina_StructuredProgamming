#include <stdio.h>

#define BUFFER_SIZE 5

void insert(int buffer[], int *index, int value) {
    buffer[*index] = value;
    *index = (*index + 1) % BUFFER_SIZE;
}

void printBuffer(int buffer[], int index, int count) {
    int i;
    int start = (index + BUFFER_SIZE - count) % BUFFER_SIZE;
    for(i = 0; i < count; i++) {
        int pos = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[pos]);
    }
    printf("\n");
}

int main() {
    int buffer[BUFFER_SIZE] = {0};
    int index = 0, count = 0;
    int value, choice;

    do {
        printf("\n1. Insert new sample\n2. Print buffer\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insert(buffer, &index, value);
            if(count < BUFFER_SIZE) count++;
        } else if(choice == 2) {
            printf("Buffer contents (oldest → newest): ");
            printBuffer(buffer, index, count);
        }
    } while(choice != 3);

    return 0;
}
