//
// Created by Edward Pfremmer on 1/30/16.
//

#ifndef ISSUE_37C_BUZZWORD_H
#define ISSUE_37C_BUZZWORD_H

#include <regex>

class Buzzword {
    std::string value;

public:

    Buzzword(const std::string &value);

    std::string getValue();
};

#endif //ISSUE_37C_BUZZWORD_H
