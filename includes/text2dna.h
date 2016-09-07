// A set of useful headers.

#ifndef TEXT2DNA_H
#define TEXT2DNA_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define ASCII_BITS_MAXLEN 7 // E.G. 127 is 111111 (7 digits)

char	**text_to_bin_str(char *str);
void	ft_revstr(char *str);
char	*ft_leftpad(char *str, char pad, int width);

#endif
