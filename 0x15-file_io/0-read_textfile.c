#include "main.h"

/**
 * read_textfile - reads txt file and prints to stdout
 *
 * @filename: name of file to read
 *
 * @letters: nb of letters to print
 *
 * Return: nb printed, 0 if fail or NULL filename
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int opfl, rdfl, wrtfl; /* open, read and write*/
	char *loc; /* pointer to location of text */

	if (filename == NULL)
		return (0);
	loc = malloc(sizeof(char) * letters);
	if (loc == NULL)
		return (0);

	opfl = open(filename, O_RDONLY); /* read only mode */
	if (opfl == -1) /* open fail */
	{
		free(loc);
		return (0);
	}

	rdfl = read(opfl, loc, letters); /*reads 'letters' amount of opfl in loc */
	if (rdfl == -1)
	{
		free(loc);
		close(opfl);
		return (0);
	}

	wrtfl = write(STDOUT_FILENO, loc, rdfl); /* write rdfl bit of loc to stdout */
	if (wrtfl == -1 || wrtfl != rdfl) /* fail || written bits != read bits */
	{
		free(loc);
		close(opfl);
		return (0);
	}

	free(loc);
	close(opfl);
	return (wrtfl);
}
