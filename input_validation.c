void validate_input_count(int argc) {
    if(argc < 2) {
        error("Invalid no of options given!\n");
    }

    if(argc % 2 == 0) {
        error("Invalid no of options given!\n");
    }

    return;
}

