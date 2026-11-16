#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
        char *out; /* new memory */
        unsigned int len1 = 0;
        unsigned int len2 = 0;
        unsigned int i; /* copy counter *?

        if (s1 == NULL) /* treat NULL as empty */
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        while (s1[len1] != '\0') /* measures each string */
                len1++;
        while (s2[len2] != '\0')
                len2++;

        /**
         * one block big enough for both strings
         * + 1: room for final \0
         */

        out = malloc((len1 + len2 + 1) * sizeof(char));
        if (out == NULL) /* return NULL on failure */
                return (NULL); /* also protects copy loops */

        i = 0; /* counter for first string */
        while (i < len1) /* <: we don't want s1's \0 in middle */
        {
                out[i] = s1[i]; /* copies s1 into front of out */
                i++;
        }

        i = 0; /* restarts counter for second string */
        while (i <= len2) /* copies s2 after s1. <=: also copies s2's \0 */
        {
                out[len1 + i] = s2[i]; /* starts writing right where s1 ended */
                i++;
        }

        return (out); /* caller owns memory now and frees it (free(s) in test) */
}
