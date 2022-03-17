/* Nama File: UpahKerja.c */
/* Deskripsi: Menghitung dan menampilkan upah kerja yang diterima */
/* Nama: M. Hafiz Attariq */
/* NIM: 24060121140174 */

#include <stdio.h>

int main(){
    /* Kamus */
    int gol,jpm, u;
    int g;

    /* Algoritma */
    u=0;

    printf(" Jumlah Jam Kerja : ");
    scanf("%d",&jpm);

    printf(" Golongan Pekerja : ");
    scanf("%d",&gol);

    switch (gol)
    { case 1:
             u=3000;
             break;
      case 2:
             u=3500;
             break;
      case 3:
             u=4000;
             break;
      case 4:
             u=5000;
             break;
      default:
              printf("inputan golongan salah");
    }

    if (jpm > 40)
        g = 40 * u + ((jpm - 40) * 1.5 * u);
    else
        g = jpm * u;


    printf("\n\n Upah Kerja : Rp %d \n", g);

return 0;
}
