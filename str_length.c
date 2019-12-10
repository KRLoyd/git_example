#include "numbers.h"

unsigned int str_length(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
