// A command line interface to our service

#include "text2dna.h"

int		main(int argc, char **argv)
{
	char	**result;

	if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			printf("Input: %s\n", *argv);
			result = text_to_bin_str(*argv);
			printf("First character's binary output: %s\n\n", *result);
			argv++;
		}
	}
	printf("\n");
	return (0);
}
