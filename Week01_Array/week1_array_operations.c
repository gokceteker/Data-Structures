#include <stdio.h>

#define MAX 100

// Diziyi ekrana yazdırma fonksiyonu
void printArray(int arr[], int n) {
    printf("\n--- GUNCEL DIZI ---");
    if (n == 0) {
        printf("\n(Dizi su an bos)\n");
    } else {
        printf("\n[ ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("]\n");
    }
    printf("-------------------\n");
}

// 1. Ekleme Fonksiyonu
int insertAt(int arr[], int n, int pos, int val) {
    if (n >= MAX) {
        printf("\nHata: Dizi kapasitesi dolu!\n");
        return n;
    }
    if (pos < 0 || pos > n) {
        printf("\nHata: Gecersiz indeks! (0 ile %d arasinda olmali)\n", n);
        return n;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    printf("\n'%d' degeri %d. indekse basariyla eklendi.", val, pos);
    printArray(arr, n); // İşlem sonrası otomatik yazdır
    return n;
}

// 2. Silme Fonksiyonu
int deleteAt(int arr[], int n, int pos) {
    if (n <= 0) {
        printf("\nHata: Dizi zaten bos!\n");
        return n;
    }
    if (pos < 0 || pos >= n) {
        printf("\nHata: Gecersiz indeks! (0 ile %d arasinda olmali)\n", n - 1);
        return n;
    }
    int deletedVal = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\n%d. indeksteki '%d' degeri silindi.", pos, deletedVal);
    printArray(arr, n); // İşlem sonrası otomatik yazdır
    return n;
}

// 3. Tersine Cevirme Fonksiyonu
void reverseArray(int arr[], int n) {
    if (n <= 1) {
        printArray(arr, n);
        return;
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nDizi tersine cevrildi.");
    printArray(arr, n); // İşlem sonrası otomatik yazdır
}

int main() {
    int arr[MAX], n = 0, choice;

    do {
        printf("\n===== ISLEM MENUSU =====");
        printf("\n1- Ekle (Indeks ve Deger)");
        printf("\n2- Sil (Indeks)");
        printf("\n3- Tersine Cevir");
        printf("\n4- Mevcut Diziyi Yazdir");
        printf("\n0- Cikis");
        printf("\nSeciminiz: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Gecersiz giris!");
            break;
        }

        if (choice == 1) {
            int pos, val;
            printf("Hangi indekse eklensin?: ");
            scanf("%d", &pos);
            printf("Eklenecek deger: ");
            scanf("%d", &val);
            n = insertAt(arr, n, pos, val);
        } else if (choice == 2) {
            int pos;
            printf("Silinecek indeks: ");
            scanf("%d", &pos);
            n = deleteAt(arr, n, pos);
        } else if (choice == 3) {
            reverseArray(arr, n);
        } else if (choice == 4) {
            printArray(arr, n);
        }
    } while (choice != 0);

    return 0;
}
