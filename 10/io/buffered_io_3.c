
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	char* str = "hello";
	fputs(str, stdout);
	// What if you didn't know that stdout
	// in this case was line buffered?
	// i.e, you cannot simply do:
	// fputs("\n", stdout);
	fflush(stdout);
	_exit(0);
}
