#ifdef _WIN32
#error "this program relies on glibc/musl which is to say it won't work on non-unix systems"
#endif


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 3) {
		printf("usage:\n\tsame <string 1> <string 2>\n");
		return 2;
	}

	if (strcmp(argv[1], argv[2]) == 0) {
		return 1;
	}

	return 0;
}
