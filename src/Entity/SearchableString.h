//
// Created by Edward Pfremmer on 1/28/16.
//

#ifndef ISSUE_37C_SEARCHABLESTRING_H
#define ISSUE_37C_SEARCHABLESTRING_H


#include <string>
#include <regex>
#include <map>

class SearchableString {
    std::string value;

public:
    SearchableString(std::string &value);
    int search(const std::string search);
};


#endif //ISSUE_37C_SEARCHABLESTRING_H
