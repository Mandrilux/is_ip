/*
** is_ip.c for  in /home/baptiste/openbsd/is_ip
**
** Made by
** Login   <baptiste.heraud@epitech.eu>
**
** Started on  Sat May  7 10:02:41 2016
** Last update Sat May  7 10:37:46 2016 
*/

#include "ip.h"

int	is_ip(char *str)
{
  char	**tmp;
  int	nb1 = 0, nb2 = 0, nb3 = 0, nb4 = 0;

  if (str == NULL)
    return (0);
  if ((tmp = strtowordtab(str,'.')) == NULL)
    return (0);
  if (count_elem(tmp) != 4)
    return (0);
  if (is_num(tmp[0]) == 1 && is_num(tmp[1]) == 1 && is_num(tmp[2]) == 1 && is_num(tmp[3]) == 1)
    {
      nb1 = atoi(tmp[0]);
      nb2 = atoi(tmp[1]);
      nb3 = atoi(tmp[2]);
      nb4 = atoi(tmp[3]);
      if (nb1 <= 255 && nb2 <= 255 && nb3 <= 255 && nb4 <= 255)
	return (1);
      return (0);
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
