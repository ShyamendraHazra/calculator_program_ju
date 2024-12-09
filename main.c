#include <stdio.h>
#include "calculator.h"


int main(int argc, char** args) {

    FLAG flag = {
        .ptr = (const char *[]){"-e", "-i", "-h", "--exec", "--interactive", "--help"},
        .count = 6
    };

    validate_input_flags(argc, args, flag);
    return 0;
}