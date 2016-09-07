#include "text2dna.h"

char	*ascii_to_base4(int ascii);

/*
** This function takes in a string of ASCII-complaint
** characters then converts into a character matrix,
** where each row is the base-7 equivalent of a given
** character's ASCII value.
*/
char	**text_to_base4_str(char *str)
{
	int		i;
	int		len;
	char	**matrix;

	len = strlen(str);
	matrix = malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (*str)
	{
		matrix[i] = ascii_to_base4((int)*str);
		str++;
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}

/*
** This function turns a given ASCII value
** into a string of base-4 digits.
*/
char	*ascii_to_base4(int ascii)
{
	int		leftover;
	int		base4;
	int		i;
	int		j;
	char	*base4_str;

	base4 = 0;
	i = 1;
	j = 0;
	base4_str = malloc(ASCII_BASE7_MAXLEN + 1); // This needs to be an even # for the triplet conversion (sans \0).
	while (ascii)
	{
		leftover = ascii % 4;
		ascii /= 4;
		base4 = base4 + (leftover * i);
		base4_str[j] = leftover + '0';
		j++;
		i *= 10;
	}
	base4_str[j] = '\0';
	ft_revstr(base4_str);
	base4_str = ft_leftpad(base4_str, '0', ASCII_BASE7_MAXLEN);
	return (base4_str);
}
