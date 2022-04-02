/* Nama file    : jumSubArray.c*/
/* Deskripsi    : Menghitung besarnya penjumlahan sub array/tabel T. */
/* Nama         : M. Hafiz Attariq*/
/* NIM          : 24060121140174*/


#include <stdio.h>
#include <math.h>

int main(){
    /*Kamus*/
    int N, i, j, sum;

    /*Algoritma*/

    printf("Menghitung Jumlah Elemen Array\n");
    printf("\nBanyaknya elemen (ukuran array) : ");
    scanf("%d", &N);

    printf("\nMasukan elemen array\n");

    int T[N];
    for(i = 0; i < N; i++){
        printf("\nNilai elemen array ke - %d : ", i);
        scanf("%d", &T[i]);
    }

    sum = 0;

    for(i = 0; i < N; i++){
        sum += T[i];
        for (j = i + 1; j < N; j++){
            sum += T[j];
        }
    }

    printf("\nJumlah elemen array yang dihasilkan adalah %d\n", sum);
    return 0;
}


