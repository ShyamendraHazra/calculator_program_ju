#include "calculator.h"
#include <stdio.h>
#include <string.h>

void validate_input_flags(int argc, char** args, FLAG flag) {

    validate_input_count(argc);

    for(int i = 1; i < argc; i+=2) {
        int j;
        for(j = 0; j < flag.count; j++) {

            if(!(strcmp(args[i], flag.ptr[j]))) {

                break;

            }

        }

        if(j == flag.count) {
            
            error("\nInvalid flag %s given!\n", args[i]);

        }

    }

}