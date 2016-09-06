// A set of helpers of higher level functionality

#include "text2dna.h"

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
