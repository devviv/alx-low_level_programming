#include "main.h"
/**
 * read_textfile - read a file
 * @filename: the file 's name
 * @letters: number of letter to be read
 * Return: reader
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader;

	reader = read(0, (void *)filename, letters);
	return (reader);
}
