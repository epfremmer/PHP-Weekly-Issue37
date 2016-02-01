//
// Created by Edward Pfremmer on 1/30/16.
//

#ifndef ISSUE_37C_BUZZWORDFACTORY_H
#define ISSUE_37C_BUZZWORDFACTORY_H

#include <string>
#include "../Entity/Buzzword.h"

class BuzzwordFactory {
public:
    static Buzzword* make(const std::string&);
};


#endif //ISSUE_37C_BUZZWORDFACTORY_H
