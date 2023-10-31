#include "main.h"

/**
 * create_buffer - The function allocates 1024 bytes for a buffer.
 * @file: pointer to the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - The function that closes file descriptors.
 * @file_descriptor: The file descriptor to be closed.
 *
 * Return: No return.
 */
void close_file(int file_descriptor)
{
	int cclose;

	cclose = close(file_descriptor);
	if (cclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - The copies the contents of a file to another file.
 * @argc: pointer to the number of arguments supplied to the program.
 * @argv: an array of character pointers listing all the arguments.
 *
 * the argument count is incorrect - exit code 97.
 * file_from does not exist or cannot be read - exit code 98.
 * file_to cannot be created or written to - exit code 99.
 * file_to or file_from cannot be closed - exit code 100.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rread, wwrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rread = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || rread == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wwrite = write(file_to, buffer, rread);
		if (file_to == -1 || wwrite == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	} while (rread > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
