#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void arrayArrangement(int array[], int n, int ascending)
{
    int i;
    if (ascending) {
        for (i = 0; i < n; i++)
            printf("%d ", array[i]);
    } else {
        for (i = n - 1; i >= 0; i--)
            printf("%d ", array[i]);
    }
    printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
    int array[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(array) / sizeof(array[0]);
    int ascending;

    printf("1: Ascending\n 0: Descending\n");
    scanf("%d", &ascending);

    insertionSort(array, n);
    arrayArrangement(array, n, ascending);

    return 0;
}
