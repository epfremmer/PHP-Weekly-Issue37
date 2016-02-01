//
// Created by Edward Pfremmer on 1/29/16.
//

#ifndef ISSUE_37C_ARGS_H
#define ISSUE_37C_ARGS_H

#include <string>
#include <iostream>

class Args {
    std::string input;

public:
    Args(int argc, char *argv[]);
    std::string getInput();
    bool invalid();

private:
    void parseArgs(int argc, char *argv[]);
};


#endif //ISSUE_37C_ARGS_H
