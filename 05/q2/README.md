Q2
==========================================

Translate the following do-while loop to MIPS assembly.

> See `place_single_bomb` in `../../../assns/minesweeper/minesweeper.c`

```c
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
```

> What if we used `while` loop instead? Go to ./while.c.

[ ] Translate `./do_while.c` to `./do_while.s`
