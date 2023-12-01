#include <stdio.h>

// Function prototype
int find_min(int a[], int n);

int main()
{
    int a[] = {8, 4, 9, 5, 7, 6, 3, 2};
    int min = find_min(a, 8);
    printf("%d\n", min);
}

/**
 * @brief Find the minimum value.
 *
 * @param a Integer array.
 * @param n Length of the array.
 */
int find_min(int a[], int n)
{
    int min;
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}