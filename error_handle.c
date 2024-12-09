#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "calculator.h"


void usage() {
    printf(\
        "\n"\
        "PROGRAM <flag> <data> ...\n"\
        "\n"\
        "flags and their usage ::\n"\
        "-e, --exec <expression>\t\t[directly calcualte the result of the expression]\n"\
        "-i, --interactive\t\t[enter interactive mode]\n"\
        "-h, --help\t\t\t[display this help message]\n"\
    );
}

void error(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    usage();
    exit(EXIT_FAILURE);
}