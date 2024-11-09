#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaBekerja;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    // Menghitung lama bekerja
    if (jamKeluar >= jamMasuk) {
        lamaBekerja = jamKeluar - jamMasuk;
    } else {
        lamaBekerja = (jamKeluar + 12) - jamMasuk;
    }

    // Output hasil lama bekerja
    printf("Lama bekerja %d jam\n", lamaBekerja);

    return 0;
}
