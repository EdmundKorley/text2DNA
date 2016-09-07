// A set of useful headers.

#ifndef TEXT2DNA_H
#define TEXT2DNA_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define ASCII_BASE7_MAXLEN 4 // E.G. 255 (max extended ASCII value) is 3333 (4 digits)
#define BASE 4 // If we revert to base 2 in the future, we only have to change the code here

char	**text_to_base4_str(char *str);
void	ft_revstr(char *str);
char	*ft_leftpad(char *str, char pad, int width);

#endif
