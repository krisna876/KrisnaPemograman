#include <stdio.h>
#include <math.h> // untuk menggunakan fungsi sqrt

int main() {
    float alas, tinggi, luas, keliling, sisi_miring;

    // Input alas dan tinggi
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2;
    
    // Menghitung panjang sisi miring (menggunakan Teorema Pythagoras)
    sisi_miring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);

    // Menghitung keliling segitiga
    keliling = alas + 2 * sisi_miring;

    // Menampilkan hasil
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}

