/*
** main.c for  in /home/baptiste/openbsd/is_ip
**
** Made by
** Login   <baptiste.heraud@epitech.eu>
**
** Started on  Sat May  7 09:49:05 2016
** Last update Sat May  7 10:50:56 2016 
*/

#include "ip.h"

int	usage(char *name)
{
  printf("%s usage : [IP]\n", name);
  return (EXIT_FAILURE);
}
int	main(int ac, char **av)
{
  int r;

  if (ac != 2)
    return (usage(av[0]));
  printf("%s is ip ? = ", av[1]);
  r = is_ip(av[1]);
  if (r == 1)
    printf("True\n");
  else
    printf("False\n");
  return (EXIT_SUCCESS);
}
