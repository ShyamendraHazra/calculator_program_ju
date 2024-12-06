void validate_input_flags(int argc, char** args, char** flags, int flag_count) {

    validate_input_count(argc);

    for(int i = 1; i < argc; i+=2) {

        for(int j = 0; j < flag_count; j++) {

            if(args[i] == flags[i]) {

                break;

            }

        }

        if(j == flag_count) {
            
            error("Invalid flag %s given!\n", args[i]);

        }

    }

}