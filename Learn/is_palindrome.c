#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// Function prototype
bool is_palindrome(char s[]);

int main()
{
    char s[] = "abcdcba";
    if (is_palindrome(s))
    {
        printf("True.\n");
    } else
    {
        printf("False.\n");
    }
    return 0;
}

/**
 * @brief Check if a string is a palindrome or not.
 *
 * @param s The string to check.
 * @return true If the string is a palindrome.
 * @return false If the string is not a palindrome.
 *
 */
bool is_palindrome(char s[])
{
    int m = strlen(s) / 2;
    int len = strlen(s);
    for (int i = 0; i < m; i++)
    {
        if (s[i] != s[len - i - 1]) return false;
    }
    return true;
}