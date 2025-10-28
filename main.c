#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{

	if (argc < 3) {
		printf("usage:\n\tsame <string 1> <string 2>\n");
		return 1;
	}

	if (strcmp(argv[1], argv[2]) == 0) {
		return 0;
	}

	return 1;
}
