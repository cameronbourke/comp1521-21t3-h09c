#include <stdio.h>
#include <string.h>

union _all {
    int   ival; // size: 4
    char cval;  // size: 1
    char  sval[4]; // size: 4
    float fval; // size: 4
    unsigned int uval; // size: 4
};

typedef union _all _all_t;


int main(int argc, char *argv[]) {
    union _all var;
    // _all_t var;

    var.uval = 0x00313233;
    // 0b0000 0000 0011 0001 0011 0010 0011 0011

    // 0x33
    // 0x32
    // 0x31
    // 0x00

    if (argc <= 1) {
        return -1;
    }
    // checks if the given input is "a"
    if (argv[1][0] == 'a') {
        printf("a: 0x%x\n", var.uval);
    }
    // checks if the given input is "b"
    if (argv[1][0] - 'b' == 0) {
        printf("b: %d\n", var.ival);
    }
    // checks if the given input is "c"
    if (*(argv + 1)[0] == 'c') {
        printf("c: %c\n", var.cval);
    }
    // checks if the given input is "d"
    if (**(argv + 1) == 'd') {
        printf("d: %s\n", var.sval);
    }
    // checks if the given input is "e"
    if (memcmp(argv[1], "e", 1) == 0) {
        // https://en.wikipedia.org/wiki/Single-precision_floating-point_format
        // https://www.h-schmidt.net/FloatConverter/IEEE754.html
        // print in decimal place
        printf("e: %f\n", var.fval);
    }
    // checks if the given input is "f"
    if (strcmp(argv[1], "f") == 0) {
        // print in scientific notation
        printf("f: %e\n", var.fval);
    }
}