#include <stdio.h>

// Function prototype
int count_occurrence(int m, int a[], int n);

int main()
{
    int a[] = {8, 4, 2, 5, 2, 6, 3, 2};
    int occurrence = count_occurrence(2, a, 8);
    printf("%d\n", occurrence);
    return 0;
}

/**
 * @brief Find the occurrences of a value in an array.
 *
 * @param to_find The value to find its occurrences.
 * @param a Integer array.
 * @param n Length of the array.
 */
int count_occurrence(int to_find, int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == to_find)
            count++;
    }
    return count;
}