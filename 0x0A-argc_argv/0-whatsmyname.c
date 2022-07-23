#include <stdio.h>

/**
 * main -> this is a function that prints its name
 * @argc: argc parametre
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main (argc, char *argv[])
{
	printf("%s\n", *argv);
}
