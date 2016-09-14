// Our public-facing routine for converting
// input strings to DNA encodings

#include "text2dna.h"

char	**text_to_dna(char *input)
{
	char	**base4_matrix;
	int		rows;

	base4_matrix = text_to_base4(input);
	rows = ft_matrix_rows(base4_matrix);
	ft_traverse_matrix(base4_matrix, rows, &base4_to_dna);
	return (base4_matrix);
}
