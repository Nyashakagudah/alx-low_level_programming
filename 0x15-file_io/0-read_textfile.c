#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t pf = 0, pax = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	pf = open(filename, O_RDONLY);
	if (pf < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	pax = read(pf, buffer, letters);
	pax = write(STDOUT_FILENO, buffer, pax);
	if (pax < 0)
		return (0);

	close(pf);
free(buffer);
	return (pax);
}
