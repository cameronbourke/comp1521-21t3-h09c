#include <stdio.h>

void print_array(int nums[], int i)
{
    if (i == 10) return;
    printf("%d\n", nums[i]);
    print_array(nums, i + 1);
}

int main(void)
{
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    print_array(nums, 0);
    return 0;
}
