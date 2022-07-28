#include "main.h"
/**
 * read_textfile - Reads text file and prints to POSIX STDOUT
 * @filename: File to be printed
 * @letters: Number of bytes to be printed
 * Return: On error 0. On succes the number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_me, count;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));
	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	if (fd == -1)
		return (0);

	read_me = read(fd, buf, letters);

	if (read_me == -1)
		return (0);


	count = write(STDOUT_FILENO, buf, read_me);

	if (count == -1 || read_me != count)
		return (0);

	free(buf);

	close(fd);

	return (count);
}
