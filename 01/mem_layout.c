#include <stdio.h>
#include <stdlib.h>

char* s1 = "abc";

int main(void) {
	char* s2 = "def";
	// char s3[] = "test";

	printf("s1: %p\n", s1);
	printf("s2: %p\n", s2);
	// printf("s3: %p\n", s3);

	printf("&s1: %p\n", &s1);
	printf("&s2: %p\n", &s2);
	// printf("&s3: %p\n", &s3);

	return EXIT_SUCCESS;
}
