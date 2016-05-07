/*
** free.c for  in /home/baptiste/rendu/is_ip
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat May  7 10:43:59 2016
** Last update Sat May  7 10:47:00 2016 
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
