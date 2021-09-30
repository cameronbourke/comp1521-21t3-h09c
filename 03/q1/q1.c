#include <stdio.h>
#include <limits.h>

int main(void) {
	short v = 30000 + 30000; // 2^15 - 1 = 32767
	printf("sizeof(v): %zu\n", sizeof(v));
	printf("%d\n", v);
}
