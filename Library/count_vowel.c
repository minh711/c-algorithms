#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototype
int count_vowel(char s[]);

int main()
{
  char s[] = "It's a wonderful day!";
  int vowels = count_vowel(s);
  printf("%d", vowels);
  return 0;
}

/**
 * @brief Count the number of vowels in a string.
 *
 * @param s The target string.
 * @return int Number of the string's vowels.
 */
int count_vowel(char s[])
{
  int count = 0;
  for (int i = 0; i < strlen(s); i++)
  {
    switch (toupper(s[i]))
    {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        count++;
    }
  }
  return count;
}
