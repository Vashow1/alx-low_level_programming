#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: the string to be checked.
 * The if condition checks if string is empty,
 * and if it is, it is a palindrome by default
 * it also acts as a check so as to not cause an infinite loop
 *
 * Return: 1 if palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = length(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_pali(s, len, i));
}

/**
 * length - computes the length of the string s.
 * @s: the string in question
 *
 * Return: the length of the string
 */

int length(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += length(s + len);
	}
	return (len);
}

/**
 * check_pali - takes in various variables and
 * checks if string is a palindrome or not.
 * @s: the string to be checked.
 * @len: the length of the string
 * @i: the index to keep track where the pointer is.
 *
 * Return: 1 if palindrome and 0 if not.
 */

int check_pali(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_pali(s, len, i + 1));
	}
	return (0);
}
