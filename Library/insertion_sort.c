#include <stdio.h>

// Function prototype
void insertion_sort(int a[], int n);
void a_display(int a[], int n);

int main() {
    int a[] = {8, 4, 9, 5, 7, 6, 3, 2};
    insertion_sort(a, 8);
    a_display(a, 8);
}

/**
 * @brief Insertion sort function.
 *
 * @param a Integer array.
 * @param n Length of the array.
 */
void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

/**
 * @brief Display for an array.
 *
 * @param a Integer array.
 * @param n Length of the array.
 */
void a_display(int a[], int n)
{
    printf("%d", a[0]);
    for (int i = 1; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}