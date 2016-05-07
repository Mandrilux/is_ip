/*
** free.c for  in /home/baptiste/openbsd/is_ip
**
** Made by
** Login   <baptiste.heraud@epitech.eu>
**
** Started on  Sat May  7 10:43:59 2016
** Last update Sat May  7 10:50:27 2016 
*/

#include "ip.h"

int	free_tab(char **tab, int error)
{
  int	i = -1;

  while (tab[++i] != NULL)
    free(tab[i]);
  free(tab);
  return (error);
}
