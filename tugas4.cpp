#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memastikan bahwa bilangan positif
    if (bilangan < 0) {
        printf("Harap masukkan bilangan bulat positif!\n");
    } else {
        // Menentukan apakah bilangan ganjil atau genap
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}

