#include "main.h"
/**
 * create_file - Creates a file
 * @filename: File to be created
 * @text_content: What is expected within the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b, a = 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);


	if  (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[a])
		{
			a++;
			b = write(fd, text_content, a);
			if (b != a)
				return (-1);
		}
	}

	close(fd);

	return (1);
}
