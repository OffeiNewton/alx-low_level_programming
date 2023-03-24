#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *start, int num_bytes);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	char *start = (char *) &main;
	print_opcodes(start, num_bytes);

	return (0);
}

void print_opcodes(char *start, int num_bytes)
{
	int i;
	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02x ", start[i] & 0xff);
	}
	printf("%02x\n", start[i] & 0xff);
}
