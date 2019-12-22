#include <stdio.h>
#include <stdlib.h>

int main() {

    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    char *nama;
    nama = malloc(sizeof(nama));

    printf("Masukkan nama: ");
    scanf("%*[\n] %[^\n]", nama);

    printf("Yang dimasukkan adalah : %d dan %s\n", nilai, nama);
    return 0;
}
