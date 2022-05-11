#include <stdio.h>

void swap(int *xp, int *yp)
{
    //Kamus Lokal
    int temp;

    //Algoritma
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j, min_idx;

    //Algoritma
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    //Kamus Lokal
    int i;

    //Algoritma
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    //Kamus Lokal
    int arr[] = {30, 14, 36, 26, 23, 2, 31, 15, 13, 34};
    int n;

    //Algoritma
    n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
