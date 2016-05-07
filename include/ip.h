#ifndef IP_H_
#define IP_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/************ P O S I X *************/

char *strdup(const char *s);

	/* is_ip.c */

int	is_ip(char *str);
int     count_elem(char **str);
int     is_num(char *string);

	/* strtoword.c */

int     count_words(char *str, char decoup);
int     wordlen(char *str, char decoup);
char	*complete_line(char *str, int nb, char decoup);
char    **small_tab(char *str);
char    **strtowordtab(char *str, char decoup);

	/* free.c */

int     free_tab(char **tab, int error);

#endif /* IP_H_ */
