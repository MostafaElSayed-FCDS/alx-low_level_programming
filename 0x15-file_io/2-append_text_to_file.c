#include "main.h"

/**
 * append_text_to_file - Appends the specified text content to an existing file
 * or creates a new file with the specified content if it
 * does not already exist
 *
 * @filename: A pointer to the name of the file to append to, or create
 * @text_content: A pointer to a NULL-terminated string containing
 * the text content to append to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
