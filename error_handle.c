void usage() {
    printf(\
        "PROGRAM <flag> <data> ...\n"\
        "\n"\
        "flags and their usage ::\n"\
        "-e, --exec\t<expression>\t\t[directly calcualte the result of the expression]\n"\
        "-i, --interactive\t\t\t\t[enter interactive mode]\n"\
    );
}

void error(char* str) {
    printf(str);
    usage();
    exit(EXIT_FAILURE);
}