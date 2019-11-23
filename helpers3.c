#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid of int pointers
 * @grid: Char double pointer to be freed
 * @height: int for height of 2D array to be passed
 * Return: void
 */

void free_grid(char **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);

	free(grid);
}
/**
 * special_char - if the user types control d, it exits the shell and handles
 * the error when the user keeps on tabbing, it carries out the command
 * @r: the number of bytes read in from the user input
 * @l: the buffer
 * Return: Always (0) for succcess
 */
int  special_char(char* l, ssize_t r)
{

	if (r == EOF)
	{
		_putchar('\n');
		free(l);
		exit(EXIT_SUCCESS);
	}

	if (0 == _strcmp(l,"\n"))
		return(127);

	return (0);
}
