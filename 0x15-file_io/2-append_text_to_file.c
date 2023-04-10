#include "main.h"

/**
 * create_file - creates file with content in it
 *
 * @filename: name of the file
 *
 * @text_content: content to put in the file
 *
 * Return: 1 if sucess, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/**
	 * This file does the same thing as the one that creates
	 * a file and adds text to it,
	 * except this one APPENDS at the end of the
	 * file thanks to the O_APPEND argument
	 */

	int opfl, wrtfl;
	int size;

	if (filename == NULL) /* No filename = error */
		return (-1);

	opfl = open(filename, O_WRONLY | O_APPEND); /*create and append*/

	size = 0;
	if (text_content != NULL) /* text has to be != null */
	{
		for (size = 0; text_content[size];) /*navigating text content */
			size++;
	}

	wrtfl = write(opfl, text_content, size); /* writing in the content */

	if (opfl == -1 || wrtfl == -1) /* write/open fail */
		return (-1);

	close(opfl); /*closing file */
	return (1);
}
