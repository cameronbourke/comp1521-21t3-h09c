#include <stdio.h>

void print_array_rec (int nums[], int nums_len, int index) {
	if (index == nums_len) return; // base case
	// recursive case
	print_array_rec(nums, nums_len, index+1);
	printf("%d\n", nums[index]);
}

int main(void)
{
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
		/*
    for (int i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);
    }
		*/
		print_array_rec(nums, 10, 0);
    return 0;
}
