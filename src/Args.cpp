//
// Created by Edward Pfremmer on 1/29/16.
//

#include <sys/poll.h>
#include "Args.h"

Args::Args(int argc, char *argv[]) {
    parseArgs(argc, argv);
}

void Args::parseArgs(int argc, char *argv[]) {
    if (argc == 2) {
        this->input = argv[1];
        return;
    }

    pollfd fds { .fd = 0, .events = POLLIN };

    if (this->input.empty() && poll(&fds, 1, 0)) {
        std::getline(std::cin, this->input);
    }
}

std::string Args::getInput() {
    if (this->invalid()) {
        std::cout << "Missing input argument from stdin or $1" << std::endl;
        exit(EXIT_FAILURE);
    }

    return this->input;
}

bool Args::invalid() {
    return this->input.empty();
}
