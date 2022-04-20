#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

int main()
{
    //kamus
    int arr[] = {8, 10, 13, 14, 22, 23, 31, 33, 41, 47};
    int x = 31;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;

    //algoritma
    //SEQSearchX1(arr, n, &ix, x);
    BinSearch1(arr, n, &ix, x);
    (ix == -1)
        ? printf("Elemen tidak ditemukan")
        : printf("Elemen ditemukan pada index ke-%d", ix);

    return 0;
}
