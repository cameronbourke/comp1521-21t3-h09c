#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	char* str = "hello";
	fputs(str, stdout);
	// Poll: What about now?
	fputs("\n", stdout);
	_exit(0);
}
