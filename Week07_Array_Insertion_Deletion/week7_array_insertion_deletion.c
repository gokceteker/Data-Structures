#include <stdio.h>

#define MAX 100

void insert(int arr[], int *n, int element, int position) {
    if (*n >= MAX) {
        printf("Array is full.\n");
        return;
    }

    for (int i = *n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    (*n)++;
}

void delete(int arr[], int *n, int position) {
    if (*n <= 0) {
        printf("Array is empty.\n");
        return;
    }

    for (int i = position - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX];
    int n, choice, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position: ");
                scanf("%d", &position);
                insert(arr, &n, element, position);
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                delete(arr, &n, position);
                break;

            case 3:
                display(arr, n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}
