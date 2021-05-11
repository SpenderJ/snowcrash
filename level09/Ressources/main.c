#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = -1;
	while (argv[1][++i])
		argv[1][i] -= i;
	printf("%s\n", argv[1]);
	return (0);
}
