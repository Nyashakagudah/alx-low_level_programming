#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int pax = 0, pr = 0, i = 0;

	if (!filename)
		return (-1);

	pax = open(filename, O_WRONLY | O_APPEND);
	if (pax < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		pr = write(pax, text_content, i);
		if (pr < 0)
		return (-1);
	}
	close(pax);
	return (1);
}
