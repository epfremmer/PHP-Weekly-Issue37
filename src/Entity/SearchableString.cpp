//
// Created by Edward Pfremmer on 1/28/16.
//

#include <string>
#include <iostream>
#include "SearchableString.h"

SearchableString::SearchableString(std::string &value) {
    this->value = value;

    std::transform(this->value.begin(), this->value.end(), this->value.begin(), ::tolower);
}

int SearchableString::search(const std::string search) {
    int result = 0;

    std::string input(search);
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    size_t pos = this->value.find(input, 0);

    while (pos != std::string::npos) {
        pos = this->value.find(input, pos+1);
        result++;
    }

    return result;
}
