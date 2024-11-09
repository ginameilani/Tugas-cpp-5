#include <stdio.h>

int main() {
    char kode[10];
    char jenis;
    float harga, hargaSetelahDiskon, diskon;

    // Input kode, jenis, dan harga
    printf("Masukkan kode barang: ");
    scanf("%s", kode);

    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    // Menentukan diskon berdasarkan jenis barang
    switch (jenis) {
        case 'A':
        case 'a':
            diskon = 0.10;
            break;
        case 'B':
        case 'b':
            diskon = 0.15;
            break;
        case 'C':
        case 'c':
            diskon = 0.20;
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1;
    }

    // Menghitung harga setelah diskon
    hargaSetelahDiskon = harga - (harga * diskon);

    // Output harga setelah diskon
    printf("Kode Barang: %s\n", kode);
    printf("Jenis Barang: %c\n", jenis);
    printf("Harga Setelah Diskon: %.2f\n", hargaSetelahDiskon);

    return 0;
}
