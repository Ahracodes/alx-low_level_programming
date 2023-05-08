#include "main.h"

/**
 * error_97 - function for usage error
 *
 * Return: void
 */
void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_98 - function for reading errors
 *
 * @name_of_file: name of file
 *
 * Return: void
 */
void error_98(char *name_of_file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name_of_file);
	exit(98);
}

/**
 * error_99 - function for writing errors
 *
 * @name_of_file: name of file
 *
 * Return: void
 */
void error_99(char *name_of_file)
{
	dprintf(STDERR_FILENO, "Error: Can't write tp %s\n", name_of_file);
	exit(99);
}

/**
 * error_100 - closing errors function
 *
 * @file_descriptor: file descriptor
 *
 * Return: void
 */
void error_100(int file_descriptor)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
	exit(100);
}

/**
 * main - function that copies from file to file
 *
 * @argc: arguments passed to program
 *
 * @argv: array containing the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, rtrn;
	char buffer[STORAGE_SIZE];

	if (argc != 3) /* arguments have to be = 3 */
		error_97(); /* incorrect usage */

	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1) /* source file open fail */
		error_98(argv[1]);

	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1) /* destination file open fail */
		error_99(argv[2]);

	while ((rtrn = read(from_file, buffer, sizeof(buffer))) != 0)
	/**
	 * loop to read through bytes in buffer and store
	 * then in rtrn each time while checking if the nb of
	 * bytes written is not equal to rtrn. if not
	 * --> writing error */
	{
		if (write(to_file, buffer, rtrn) != rtrn)
			error_99(argv[2]);
	}
	if (rtrn == -1) /* reading error */
		error_98(argv[1]);

	if (close(from_file) == -1) /*check for closing fail */
		error_100(from_file);
	if (close(to_file) == -1)
		error_100(to_file);

	return (0);
}
