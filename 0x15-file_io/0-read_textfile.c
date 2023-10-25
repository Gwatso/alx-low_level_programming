#include "main.h"
#include <stdlib.h>

/**
 * ReadText_file - Reads a text_file and prints it to POSIX stdout.
 * File_name: A pointer that points to the name of the file.
 * Letters: The num of letters the func shld read and print.
 *
 * Return:Returns 0 If the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}