#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_count = 0, length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		write_count = write(file_descriptor, text_content, length);
		if (write_count != length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}

