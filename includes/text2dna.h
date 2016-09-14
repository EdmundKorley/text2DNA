// A set of useful headers.

#ifndef TEXT2DNA_H
#define TEXT2DNA_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define ASCII_BASE4_MAXLEN 4 // E.G. 255 (max extended ASCII value) is 3333 (4 digits)
#define BASE 4

char	**text_to_base4(char *str);
void	ft_revstr(char *str);
char	*ft_leftpad(char *str, char pad, int width);
void	ft_traverse_matrix(char **matrix, int rows, void callback(char *));
void	base4_to_dna(char *base4_digit);
char	**text_to_dna(char *input);
int		ft_matrix_rows(char **matrix);
void	ft_putcharstar(char *letter);

#endif
