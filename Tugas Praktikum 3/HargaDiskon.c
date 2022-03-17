/* Nama File: HargaDiskon.c */
/* Deskripsi: Menghitung dan menampilkan besarnya harga setelah diberikan diskon */
/* Nama: M. Hafiz Attariq */
/* NIM: 24060121140174 */

#include <stdio.h>

int main(){
    /* Kamus */
    int i;
	float d,s;
	char p;

    /* Algoritma */
    printf("Harga awal  : ");
	scanf("%d", &i);
	printf("Jenis Diskon  : ");
	scanf(" %c", &p);

    switch(p){
    case 'A' :
			d = 0.1;
			s = i - (i * d);
			printf("Harga setelah diskon %.2f", s);
			break;

		case 'B' :
			d = 0.15;
			s = i - (i * d);
			printf("Harga setelah diskon %.2f", s);
			break;

		case 'C' :
			d = 0.2;
			s = i - (i * s);
			printf("Harga setelah diskon %.2f", s);
			break;

		default :
			printf("Bukan merupakan pilihan diskon");
	}
	return 0;
}
