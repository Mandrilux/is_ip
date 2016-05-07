/*
** is_ip.c for  in /home/baptiste/openbsd/is_ip
**
** Made by
** Login   <baptiste.heraud@epitech.eu>
**
** Started on  Sat May  7 10:02:41 2016
** Last update Sat May  7 10:33:36 2016 
*/

#include "ip.h"

int	is_ip(char *str)
{
  char	**tmp;
  if ((tmp = strtowordtab(str,'.')) == NULL)
    return (-1);
  if (count_elem(tmp) != 4)
    return (0);
  if (is_num(tmp[0]) == 1 && is_num(tmp[1]) == 1 && is_num(tmp[2]) == 1 && is_num(tmp[3]) == 1)
    {
      printf("ok\n");
    }
  else
    return (0);
}

int	count_elem(char **str)
{
  int	i;

  i = -1;
  while (str[++i] != NULL);
  return (i);
}

int     is_num(char *string)
{
  int   i;

  i = -1;
  while (string[++i] != '\0')
    {
      if (string[i] < '0' || string[i] > '9')
	return (0);
    }
  return (1);
}
