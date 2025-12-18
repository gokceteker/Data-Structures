#include <stdio.h>
#include <math.h>

void Algo1(int n) {
    int i;
    for (i = 1; i <= n; i++)
        printf("Hello World\n");
}

void Algo2(int n) {
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            printf("Hello World\n");
}

void Algo3(int n) {
    int i;
    for (i = 1; i < n; i = i * 2)
        printf("Hello World\n");
}

void Algo4(int n) {
    int i;
    for (i = 1; i < n; i = i / 5)
        printf("Hello World\n");
}

void Algo5(int n) {
    int i;
    for (i = 1; i < pow(n, 3); i = i * 5)
        printf("Hello World\n");
}

void Algo6(int n) {
    int i;
    for (i = 1; i * i <= n; i++)
        printf("Hello World\n");
}

void Algo7(int n) {
    int i = 1, k = 1;
    while (k <= n) {
        i++;
        k = k + i;
        printf("Hello World\n");
    }
}

int main() {
    int n = 5;

    Algo1(n);
    Algo2(n);
    Algo3(n);
    // Algo4(n); // Sonsuz dongu olusturdugu icin test sirasinda kapali tutulabilir.
    Algo5(n);
    Algo6(n);
    Algo7(n);

    return 0;
}
