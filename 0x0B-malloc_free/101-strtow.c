#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int i = 0;

    if (str == NULL || *str == '\0')
        return (0);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            while (str[i] == ' ')
            {
                i++;
            }
        }
        else
        {
            count++;
            while (str[i] != ' ' && str[i] != '\0')
            {
                i++;
            }
        }
    }
    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
    int i, j, k, len;
    int words_count = 0;
    char **words;

    if (str == NULL || *str == '\0')
        return (NULL);

    words_count = count_words(str);
    words = malloc(sizeof(char *) * (words_count + 1));

    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; i < words_count; i++)
    {
        while (str[j] == ' ')
            j++;

        len = 0;
        while (str[j + len] != ' ' && str[j + len] != '\0')
            len++;

        words[i] = malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            for (k = 0; k < i; k++)
            {
                free(words[k]);
            }
            free(words);
            return (NULL);
        }

        for (k = 0; k < len; k++)
        {
            words[i][k] = str[j + k];
        }
        words[i][len] = '\0';
        j += len;
    }

    words[words_count] = NULL;
    return (words);
}
