/* Nama File: TunjAnak.c */
/* Deskripsi: Menghitung dan menampilkan besarnya tunjangan anak yang diberikan */
/* Nama: M. Hafiz Attariq */
/* NIM: 24060121140174 */

#include <stdio.h>

int main(){
    /* Kamus */
    int g, t, j;

    /* Algoritma */
    printf("Gaji pokok : ");
    scanf("%d",&g);

    printf("Jumlah anak:");
    scanf("%d", &j);

    if (j <= 3 &&j>0)
        t = j * 0.1 * g;
    else if (j > 3)
        t = 3 * 0.1 * g;
    else
        t = 0;

    printf("\nTunjangan Anak yang didapat = Rp.%d\n", t);

    return 0;
}
