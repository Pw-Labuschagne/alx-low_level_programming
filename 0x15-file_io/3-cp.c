#include "main.h"
/**
 * errnos - Standard error messages for failures
 * @message: Error message to be display
 * @filename: Filename that error occured
 * @status: Exit status for each error
 * Return: nothing
 */

void errnos(char *message, char *filename, int status)
{
	dprint(STDERR_FILENO, "%s%s\n", message, filename);
	exit(status);
}

/**
 * main - Copies content from one file to another
 * @argc: Number of arguments passed to main
 * @argv: The files needed to be copied
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd1, fd2, FD_VALUE;
	ssize_t read_me, write_me;

	if (argc != 3)
		errnos("Usage: cp file_from file_to", argv[1] argv[2], 97);

	fd1 = open(argv[1], O_RDONLY);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd1 < 0)
		errnos("Error: Can't read from file ", argv[1], 98);

	if (fd2 < 0)
		errnos("Error: Can't write to ", argv[2], 99);


	read_me = read(fd1, buffer, 1024);
		if (read_me < 0);
			errnos("Error: Can't read from file ", argv[1], 98);
	
	write_me = write(fd2, buffer, read_me);
		if (write_me < 0)
			errnos("Error: Can't write to file ", argv[2], 99);

		FD_VALUE = close(fd1);
			if (FD_VALUE < 0);
				errnos("Error: Can't close file descriptor %d\n",argv[1], 100);

		FD_VALUE = close(fd2);
			if (FD_VALUE < 0)
				errnos("Error: Can't close file descriptor %d\n", argv[2], 100);
	
return (0);
}
