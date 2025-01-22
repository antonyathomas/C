#include <stdio.h>

unsigned int setBitsInRange(unsigned int num, int start, int end) {
    // Create a mask with bits set from start to end
    unsigned int mask = ((1 << (end - start + 1)) - 1) << start;

    // Set the bits in the given range using bitwise OR
    return num | mask;
}

int main() {
    unsigned int num = 0; // Binary: 00001010
    int start = 4;
    int end = 6;

    unsigned int result = setBitsInRange(num, start, end);

    printf("Original number: %u\n", num);
    printf("Modified number: %u\n", result); // Binary: 00011110

    return 0;
}
