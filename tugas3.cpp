#include <stdio.h>
#include <math.h> // untuk menggunakan fungsi sqrt

int main() {
    float alas, tinggi, sisi_miring;

    // Input sisi alas dan sisi tinggi
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan Teorema Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga: %.2f cm\n", sisi_miring);

    return 0;
}

