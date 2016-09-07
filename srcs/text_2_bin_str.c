#include "text2dna.h"

char	*ascii_to_bin(int ascii);

/*
** This function takes in a string of ASCII-complaint
** characters then converts into a character matrix, 
** where each row is the binary equivalent of a given
** character's ASCII value.
*/
char	**text_to_bin_str(char *str)
{
	int		i;
	int		len;
	char	**matrix;

	len = strlen(str);
	matrix = malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (*str)
	{
		matrix[i] = ascii_to_bin((int)*str);
		str++;
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}

/*
** This function turns a given ASCII value
** into a string of bits.
*/
char	*ascii_to_bin(int ascii)
{
	int		leftover;
	int		bin;
	int		i;
	int		j;
	char	*bit_str;

	bin = 0;
	i = 1;
	j = 0;
	bit_str = malloc(ASCII_BITS_MAXLEN + 2); // This needs to be an even # for the triplet conversion (sans \0).
	while (ascii)
	{
		leftover = ascii % 2;
		ascii /= 2;
		bin = bin + (leftover * i);
		bit_str[j] = leftover + '0';
		j++;
		i *= 10;
	}
	bit_str[j] = '\0';
	ft_revstr(bit_str);
	bit_str = ft_leftpad(bit_str, '0', ASCII_BITS_MAXLEN + 1);
	return (bit_str);
}
