#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1:string
 * @s2:strmp
 * Return:int
 * Bwave/ Bright
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
