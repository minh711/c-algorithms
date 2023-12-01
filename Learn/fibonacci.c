#include <stdio.h>

// Function prototype
void fibonacci(int term1, int term2, int n);

int main()
{
  fibonacci(1, 1, 10);
  return 0;
}

/**
 * @brief Print the Fibonacci sequence.
 *
 * @param term1 First number.
 * @param term2 Second number.
 * @param n Length of the sequence.
 */
void fibonacci(int term1, int term2, int n)
{
  int fibn;
  printf("%d, %d", term1, term2);
  for (int i = 2; i < n; i++)
  {
    fibn = term1 + term2;
    printf(", %d", fibn);
    term1 = term2;
    term2 = fibn;
  }
}