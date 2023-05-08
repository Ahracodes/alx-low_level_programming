#include "main.h"

/**
 * create_file - creates file with content in it
 *
 * @filename: namz of file
 *
 * @text_content: content to put in the file
 *
 * Return: 1 if success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int opfl, wrtfl;
	int size;

	if (filename == NULL) /* No filename = error */
		return (-1);

	opfl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*previous line serves to open a file AND assign it's permissions to it*/
	size = 0;
	if (text_content != NULL) /* text has to be != null */
	{
		for (size = 0; text_content[size];) /*navigating text content */
			size++;
	}

	wrtfl = write(opfl, text_content, size); /* writing in the text_content */
	if (opfl == -1 || wrtfl == -1) /* write/open fail */
		return (-1);
	close(opfl); /*closing file */
	return (1);
}
