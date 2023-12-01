#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main()
{
    char s1[20] = "First ";
    char s2[10] = "Second";
    char *s = string_append(s1, s2);
    printf("%s\n", s);
    return 0;
}

//    How it works?
//
//    s1 - "abc"    // a string
//
//    Data:     a  b  b  \0      // it will store a, b, c and a null terminator.
//    Indexes:  0  1  2  3
//    Length:   3
//
//    s1 - "wxyz"    // a string
//
//    Data:     w  x  y  z  \0   // it will store a, b, c and a null terminator.
//    Indexes:  0  1  2  3  4
//    Length:   4
//
//    The length of the string is not including the null terminator.
//

/**
 * @brief Append two strings.
 *
 * @param s1 First string.
 * @param s2 Second string.
 * @return char* The appended string.
 */
char *string_append(char *s1, char *s2)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;    // + 1 the null terminator
    char *s = calloc(size, sizeof(char));    // rooms for this many characters

    for (int i = 0; i < s1_length; i++)
    {
        s[i] = s1[i];
    }

    for (int i = 0; i < s2_length; i++)
    {
        s[s1_length + i] = s2[i];
    }

    // add the null terminator to tell where the string ends
    s[size - 1] = '\0';

    return s;
}