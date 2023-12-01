#include <stdio.h>
#include <stdlib.h>

void *letter_flip(char *s);

int main()
{
    char s[20] = "Flip Me Now!";
    letter_flip(s);
    printf("%s\n", s);
    return 0;
}

/**
 * @brief Flip the letter in a string from lowercase to uppercase and uppercase
 * to lowercase.
 *
 * @param s The target string
 */
void *letter_flip(char *s)
{
    char *p;
	for(p = s; *p != '\0'; p++)
    {
		if (*p >= 65 && *p<= 90)          *p += 32;
        else if (*p >= 97 && *p<= 122)    *p -= 32;
	}
}