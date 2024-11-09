#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    // Menghitung lama parkir
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (jamKeluar + 12) - jamMasuk;
    }

    // Menghitung biaya parkir
    if (lamaParkir <= 2) {
        biaya = 2000; // Biaya untuk 2 jam pertama
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500; // Biaya tambahan per jam setelah 2 jam pertama
    }

    // Output hasil biaya parkir
    printf("Lama parkir %d jam, Biaya = %d\n", lamaParkir, biaya);

    return 0;
}
