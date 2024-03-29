#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: string to be added to the end of the file.
 *
 * Return: 1 on sucess, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, x);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
