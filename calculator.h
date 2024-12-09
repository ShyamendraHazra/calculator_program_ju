#ifndef CALCULATOR_H
#define CALCULATOR_H

/* custom datatype declarations */

typedef struct flags FLAG;

/* custom datatype declarations */

/* custom datatype implementation */

struct flags {
    const char** ptr;
    unsigned int count:3;
};

/* custom datatype implementation */


/* flag validation prototype */

void validate_input_flags(int argc, char** args, FLAG flag);

/* flag validation prototype */


/* Input valiation prototype */

void validate_input_count(int argc);

/* Input valiation prototype */

/* error handle prototype */

void usage();
void error(const char* str, ...);

/* error handle prototype */


#endif