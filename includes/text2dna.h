// A set of useful headers.

#ifndef TEXT2DNA_H
#define TEXT2DNA_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define ASCII_BASE7_MAXLEN 4 // E.G. 127 is 1333 (4 digits)

char	**text_to_base4_str(char *str);
void	ft_revstr(char *str);
char	*ft_leftpad(char *str, char pad, int width);

#endif
