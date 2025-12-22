#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;
    int nonZeroCount = 0;

    printf("Matrisin satir sayisini giriniz: ");
    scanf("%d", &rows);

    printf("Matrisin sutun sayisini giriniz: ");
    scanf("%d", &cols);

    // Hata Kontrolü
    if (rows > 10 || cols > 10) {
        printf("Hata: Boyutlar 10x10'dan buyuk olamaz!\n");
        return 1;
    }

    printf("Matris elemanlarini giriniz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    // Sparse matris gösterimi
    int sparse[nonZeroCount + 1][3];

    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZeroCount;

    int k = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("\nSparse Matrix (3-tuple representation):\n");
    printf("Row\tCol\tValue\n");
    for (int i = 0; i <= nonZeroCount; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
