// A set of helpers of higher level functionality

#include "text2dna.h"

// Reverses a string in place
void	ft_revstr(char *input)
{
	int		i;
	int		len;
	char	temp;

	len = strlen(input);
	i = 0;
	while (i < len/2)
	{
		temp = input[i];
		input[i] = input[len - i - 1];
		input[len - i - 1] = temp;
		i++;
	}
}

// Adds padding to a given string with a given width.
// Note, we just have access to extraneous memory for
// this function to work.
char	*ft_leftpad(char *str, char pad, int width)
{
	int		i;
	int		j;
	int		len;
	int		room;
	char	*padded_str;

	len = strlen(str);
	room = width - len;
	if (room > 0)
	{
		i = 0;
		padded_str = malloc(sizeof(char) * (width + 1));
		while (i < room)
			padded_str[i++] = pad;
		j = 0;
		while (j < len)
			padded_str[i++] = str[j++];
		padded_str[i] = '\0';
		return (padded_str);
	}
	return (str);
}
