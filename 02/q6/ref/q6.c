#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef unsigned int Word;

Word reverse_bits(Word w) {
	Word ret = 0;
	int nbits = sizeof(Word) * 8;
	printf("nbits: %u\n", nbits);
	// if i = 4
	// then we want to set the (31-4)th bit
	// to the value of the ith bit
	for (int i = 0; i < nbits; i++) {
		if (w & (1u << i)) {
			ret |= 1u << (nbits - 1 - i);
		}
		else {
			ret &= ~(1u << (nbits - 1 - i));
		}
	}
	return ret;
}

// testing
int main(void) {
	Word w1 = 0x01234567;
	// 0000 => 0000 = 0
	// 0001 => 1000 = 8
	// 0010 => 0100 = 4
	// 0011 => 1100 = C
	// 0100 => 0010 = 2
	// 0101 => 1010 = A
	// 0110 => 0110 = 6
	// 0111 => 1110 = E
	assert(reverse_bits(w1) == 0xE6A2C480);
	puts("All tests passed!");
	return 0;
}
