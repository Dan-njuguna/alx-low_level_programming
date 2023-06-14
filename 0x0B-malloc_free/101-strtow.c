#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int word_len(char *str);
int count_words(char *str);
/**
 * word_len - locates teh index for marking the end of
 * the first word contained in a string.
 * @str: String to be searched
 * Return: the index marking the end of the initial word pointed by str
 */
int word_len(char *str)
{
	int index = 0, len = 0;
	
	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - counts number of words in a string
 * @str: Pointer to char argument
 * Return: Number of words in string
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < 0; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string to be searched
 * Return: NULL if str is NULL or '\0', words == NULL, return NULL,words
 */
char **strtow(char *str)
{
	int word_index;
	char **word;
	char *token;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word = count_words(str);
	word = malloc((sizeof(char *) * (* word + 1)));
	if (word == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		word[word_index] = token;
		word_index++;
		token = strtok(NULL, " ");
	}
	word[word_index] = NULL;
	return (word);
}
