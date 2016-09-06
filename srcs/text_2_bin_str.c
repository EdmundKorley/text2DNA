// This file defines four helper functions, and scaffolds a
//  main().  The goal is to convert a base-10 (decimal) ascii
//  value to a base 2 (binary) ascii value - and then be able
//  to represent textual input with binary, rather than decimal
//  ascii values.  Note that the binary values are treated as
//  strings, so as not to misuse the notion of an integer in
//  C (e.g. 101 should mean "One hundred and one" reliably,
//  rather than possibly "five"), and to keep an eye towards
//  scalability - while ascii values never get too large,
//  binary representations quickly overflow the number of
//  places an int type in C can handle.

#include "text2dna.h"

// To find number of bytes required to represent a given
// decimal ascii value as a string in binary
int	highest_bit(int dec_val)
{
	int	num_bits;
	int	bits_from_0;

	num_bits = 0;
	bits_from_0 = dec_val;
	while (bits_from_0)
	{
		bits_from_0 >>= 1;
		num_bits++;
	}
	return (num_bits);
}

// Confirm: Placing bits into the array in the right order,
// without re-allocating memory and without overwriting
// VALUE CONVERSATION AND RECURSION MAY ALSO BE OFF - LETS PAIR
// ON THIS TOMORROW
int	*ascii_char_to_bin_str(unsigned int ascii_val)
{
	int	*array;
	int	farthest_bit;
	int	i;
	int	input1;
	int	input2;

	i = 0;
	input2 = -1;
	farthest_bit = highest_bit(ascii_val);
	array = (char *)malloc(sizeof(char) * farthest_bit + 1);
	while (i < farthest_bit)
	{
		if (ascii_val < 2)
		{
			inptut1 = (int)ascii_val;
			*(array + i) = input1;
			if (input2 >= 0)
			{
				i++;
				*(array + i) = input2;
			}
			*(array + i) = '\0';
			return (array);
		}
		else
		{
			input1 = ascii_char_to_bin_str(ascii_val / 2);
			input2 = ascii_char_to_bin_str(ascii_val % 2);
		}
		i++;
	}
	*(array + i) = '\0';
	return (array); 
}

char	**text_to_bin_str(char *str)
{
	char	**binary_strings;
	int	num_chars;

	num_chars = strlen(str);
	binary_strings = (char **)malloc(sizeof(char *) * num_chars + 1);
	while (str)
	{
		*(binary_strings + i) = ascii_char_to_bin_str(*str); 
		i++;
		str++;
	}
	return (binary_strings);
}

int	main(int argc, char **argv)
{
	//To do: Write test
	return (0);
}
