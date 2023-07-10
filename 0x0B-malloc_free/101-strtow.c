#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}

	return (count);
}

/**
 * copy_word - Copies a word from source to destination
 * @src: The source string
 * @dest: The destination string
 * @len: The length of the word
 */
void copy_word(char *src, char *dest, int len)
{
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[len] = '\0';
}

/**
 * allocate_words - Allocates memory for storing words
 * @str: The input string
 * @words: Pointer to the array of words
 *
 * Return: 1 on success, 0 on failure
 */
int allocate_words(char *str, char **words)
{
	int i, j, k, len, word_count = 0;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				len++;
				j++;
			}

			words[word_count] = malloc(sizeof(char) * (len + 1));
			if (words[word_count] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				return (0);
			}

			copy_word(&str[i], words[word_count], len);
			word_count++;
			i = j;
		}
		else
		{
			i++;
		}
	}

	words[word_count] = NULL;
	return (1);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	if (!allocate_words(str, words))
	{
		free(words);
		return (NULL);
	}

	return (words);
}
