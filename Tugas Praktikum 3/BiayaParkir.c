/* Nama File: BiayaParkir.c */
/* Deskripsi: Menghitung dan menampilkan besarnya biaya parkir berdasarkan lamanya parkir
/* Nama: M. Hafiz Attariq */
/* NIM: 24060121140174 */

#include <stdio.h>

int main() {
    /* Kamus */
    int i, o;

    /* Algortima */
    printf("Lamanya waktu parkir(jam):");
    scanf("%d", &i);

    if(i>2){
        o = 2000 + (i-2) * 500;
        printf("Biaya parkir: %d", o);
    }
    else{
        o=2000;
        printf("Biaya parkir: %d", o);
    }
    return 0;
}
