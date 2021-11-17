#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	char* str = "hello";
	// Poll: Will this print "hello" to stdout?
	fputs(str, stdout);
	_exit(0);
}
