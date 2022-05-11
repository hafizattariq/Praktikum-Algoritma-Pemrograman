#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
    //Kamus Lokal
    int i, key, j;

    //Algoritma
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    //Kamus Lokal
    int i;

    //Algoritma
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    //Kamus Lokal
    int arr[] = {30, 14, 36, 26, 23, 2, 31, 15, 13, 34};
    int n;

    //Algoritma
    n= sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
