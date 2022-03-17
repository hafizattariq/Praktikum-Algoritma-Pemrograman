/* Nama File: TarifPLN.c */
/* Deskripsi: Menghitung dan menampilkan besarnya tarif listrik */
/* Nama: M. Hafiz Attariq */
/* NIM: 24060121140174 */

#include <stdio.h>

int main(){
    /* Kamus */
    int d, g, t;

    /* Algoritma */
    printf("Besar pemakaian daya listrik : ");
    scanf("%d", &d);
    printf("Golongan tarif :");
    scanf("%d", &g);

    if(d < 100){
        t = g * 1000 * 100;
        printf("Jumlah yang harus dibayar : %d", t);
    }
    else if(d >= 1000){
        t = (g * 1000 * d) * 1.1;
        printf("Jumlah yang harus dibayar : %d", t);
    }
    else{
        t = g * 1000 * d;
        printf("Jumlah yang harus dibayar : %d", t);
    }
    return 0;
}
