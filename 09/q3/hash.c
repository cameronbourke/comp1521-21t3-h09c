#include <stdio.h>
#include <stdint.h>

uint8_t next_hash (uint8_t current_hash_value, uint8_t byte_value) {
	printf("next_hash(%x, %x): ", current_hash_value, byte_value);
	return current_hash_value ^ byte_value;
}

int main(void) {
	uint8_t bytes[] = {
		0x33,
		0x44,
		0x23,
		0x12,
		0x55
	};

	uint8_t hash = 0;
	printf("initial hash: %x\n", hash);
	printf("----------------------\n");

	for (int i = 0; i < sizeof(bytes); ++i) {
		printf("byte: %x\n", bytes[i]);
		hash = next_hash(hash, bytes[i]);
		printf("%x\n", hash);
		printf("----------------------\n");
	}

	printf("final hash: %x\n", hash);
	
	return 0;
}
