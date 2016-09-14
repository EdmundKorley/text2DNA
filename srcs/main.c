// A command line interface to our service

#include "text2dna.h"

int		main(int argc, char **argv)
{
	char	**result;
	int		rows;

	if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			result = text_to_dna(*argv);
			rows = ft_matrix_rows(result);
			ft_traverse_matrix(result, rows, &ft_putcharstar);
			argv++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
