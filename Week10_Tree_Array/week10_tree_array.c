#include <stdio.h>

#define MAX 100

int tree[MAX];

int main() {
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Maximum limit exceeded.\n");
        return 1;
    }

    printf("Enter tree elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tree[i]);
    }

    printf("\nTree representation using array:\n");
    printf("Index\tValue\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, tree[i]);
    }

    printf("\nParent-Child Relationships:\n");
    for (int i = 0; i < n; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n) {
            printf("Parent %d -> Left Child %d\n", tree[i], tree[left]);
        }
        if (right < n) {
            printf("Parent %d -> Right Child %d\n", tree[i], tree[right]);
        }
    }

    return 0;
}
