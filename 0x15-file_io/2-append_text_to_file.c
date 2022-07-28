#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: File to append
 * @text_content: Content to append to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd, append_me, c, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL && filename)
		return (1);

	fd = open(filename, O_APPEND);

	if (fd < 0)
		return (-1);

	for (c = 0; text_content[c]; c++)
		count++;

	append_me =  write(fd, text_content, count);	
	if (append_me < 0)
		return (-1);

	close(fd);

	return (1);




}
