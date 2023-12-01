#include <stdio.h>

// Function prototype
void a_display(int a[], int n);

int main()
{
    int a[] = {8, 4, 2, 5, 2, 6, 3, 2};
    int n = 8;
    int temp = 0;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    a_display(a, 8);
    return 0;
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