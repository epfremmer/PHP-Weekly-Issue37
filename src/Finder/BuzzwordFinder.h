//
// Created by Edward Pfremmer on 1/29/16.
//

#ifndef ISSUE_37C_BUZZWORDFINDER_H
#define ISSUE_37C_BUZZWORDFINDER_H

#include <string>
#include "../Entity/Buzzword.h"
#include "../Entity/SearchableString.h"
#include "../Result/BuzzwordResult.h"

class BuzzwordFinder {
    SearchableString *input;

public:
    BuzzwordFinder(std::string input);
    BuzzwordResult* find(Buzzword*);
};


#endif //ISSUE_37C_BUZZWORDFINDER_H
