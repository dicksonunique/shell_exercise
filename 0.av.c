#include <stdio.h>
#include <stdlib.h>
/**
 *main-prototype
 *@ac:argument vector
 *@av:argume array
 *Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
