#include <stdio.h>
#include <limits.h>

struct s {
    int a;
    float b;
} x1;

union u {
    int a;
    float b;
} x2;

int main(void) {
	struct s x1 = { .a = 10, .b = 11 };
	union u x2 = { .a = 10 };
	printf("&x1: %p\n", &x1);
	printf("&x2: %p\n", &x2);
	printf("--------------------\n");

	printf("&x1.a: %p\n", &x1.a);
	printf("&x1.b: %p\n", &x1.b);
	printf("&x2.a: %p\n", &x2.a);
	printf("&x2.b: %p\n", &x2.b);
}
