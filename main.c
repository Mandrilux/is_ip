/*
** main.c for  in /home/baptiste/rendu/is_ip
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat May  7 09:49:05 2016
** Last update Sat May  7 10:18:11 2016 
*/

#include "ip.h"
int	usage(char *name)
{
  printf("%s usage : [IP]\n", name);
  return (EXIT_FAILURE);
}
int	main(int ac, char **av)
{
  if (ac != 2)
    return (usage(av[0]));
  is_ip(av[1]);
  return (EXIT_SUCCESS);
}
