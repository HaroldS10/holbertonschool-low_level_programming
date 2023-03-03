#include "main.h"
#include <stddef.h>
/**
 */
char *_strchr(char *s, char c)
{
	int i;
	char *N;

	N = NULL;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			N = &s[i];
			break;
		}
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	else
		return (N);
}
