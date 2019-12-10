#include "numbers.h"

/**
 * is_int - checks if all characters in a string represent an integer
 * @str: string to check
 * Return: 0 if true, 1 if false
*/
unsigned int is_int(char *str)
{
  unsigned int count = 0;

  if (str == NULL || *str == '\0')
    return (1);
  if (*str == '-')
    str++;
  while (*str != '\0')
  {
    if (*str < '0' || *str > '9')
      return (1);
    count++;
    str++;
  }
  if (count == 0)
    return (1);
  return (0);
}
