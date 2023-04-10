#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX stdout
 *
 * @filename: name of file to read
 *
 * @letters: nb of letters to print
 *
 * Return: nb of printed, 0 if fail or NULL filename
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int opfl, rdfl, wrtfl; /*open, read, write results */
	char *loc; /*pointer to written etxt location */

	loc = malloc(sizeof(char) * letters);
	if (loc == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	opfl = open(filename, O_RDONLY);/*opening file in read only mode */
	if (opfl == -1) /*if opening fails */
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

	wrtfl = write(STDOUT_FILENO, loc, rdfl); /*write rdfl bits of loc to stdout */
	if (wrtfl == -1 || wrtfl != rdfl) /*fail|| written bits != read bits */
	{
		free(loc);
		close(opfl);
		return (0);
	}

	return (wrtfl);
}
