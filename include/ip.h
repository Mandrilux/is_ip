#ifndef IP_H_
#define IP_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	/* is_ip.c */

int	is_ip(char *str);

	/* strtoword.c */

int     count_words(char *str, char decoup);
int     wordlen(char *str, char decoup);
char	*complete_line(char *str, int nb, char decoup);
char    **small_tab(char *str);
char    **strtowordtab(char *str, char decoup);
#endif /* IP_H_ */
