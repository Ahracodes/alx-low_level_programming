#include "main.h"

/**
 * append_text_to_file - creates file with content in it
 *
 * @filename: name of the file
 *
 * @text_content: content of the file
 *
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/**
	 * This file does the same thing as the one
	 * that creates the file then adds to it,
	 * except this one APPENDS at the end of the file
	 * thanks to the O_APPEND argument
	 */
	int opfl, wrtfl;
	int size;

	if (filename == NULL) /* No filename = error */
		return (-1);

	opfl = open(filename, O_WRONLY | O_APPEND); /* create and append */

	size = 0;
	if (text_content != NULL) /* text has to be != NULL */
	{
		for (size = 0; text_content[size];) /* navigating text content */
			size++;
	}

	wrtfl = write(opfl, text_content, size); /*writing content */
	if (opfl == -1 || wrtfl == -1) /* write or open failure */
		return (-1);

	close(opfl);
	return (1);
}
