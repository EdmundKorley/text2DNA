// Component for turning a matrix of base-4
// digits into equivalent matrix.

#include "text2dna.h"

void	base4_to_dna(char *base4_digit)
{
	switch (*base4_digit)
	{
		case '0':
			*base4_digit = 'A';
			break ;
		case '1':
			*base4_digit = 'C';
			break ;
		case '2':
			*base4_digit = 'G';
			break ;
		case '3':
			*base4_digit = 'T';
			break ;
	}
}
