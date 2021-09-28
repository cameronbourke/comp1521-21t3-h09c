#include <stdlib.h>
#include <stdio.h>

int main (void) {
	int nums[4] = { 33, 44, 55, 66 };
	int* p = &nums[0];
	printf("p: %p\n", p);
	p++;
	printf("p: %p\n", p);
	return 0;
}
