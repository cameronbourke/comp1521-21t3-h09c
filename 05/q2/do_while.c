#include <stdio.h>

int main(void) {
	int i = 0;

	do {
		printf("%d", i);
		printf("\n");
		i++;
	} while (i < 10);

	return 0;
}
