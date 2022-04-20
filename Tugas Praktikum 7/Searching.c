#include <stdio.h>
#include "Searching.h"
#include <stdbool.h>

void SEQSearchX1 (int T[], int N, int *IX, int X){
    //kamus lokal
    int i;

    //algoritma
    i= 0;
    while (i<N && T[i] !=X){
        i++;
    }
    if (T[i] == X){
        *IX = i;
    } else {
        *IX = -1;
    }
}

void BinSearch1 (int T[], int N, int *IX, int X){
    //kamus lokal
    int upper, lower, mid;

    //algoritma
    upper = N-1;
    lower = 0;
    mid = upper + lower / 2;

    while(X != T[mid] && lower < upper) {
        if(X > T[mid]){
            lower = mid +1;
        } else{
            upper = mid -1;
        }
        mid = (upper + lower) / 2;
    }
    if (X == T[mid]){
        *IX = mid;
    } else {
        *IX = -1;}
}
