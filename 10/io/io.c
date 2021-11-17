#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char* str = "hello";
	write(1, str, strlen(str));
	_exit(0);
}
