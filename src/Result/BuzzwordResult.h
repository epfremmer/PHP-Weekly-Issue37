//
// Created by Edward Pfremmer on 1/27/16.
//

#ifndef ISSUE_37C_BUZZWORDMATCH_H
#define ISSUE_37C_BUZZWORDMATCH_H

#import <string>
#include "../Entity/Buzzword.h"

class BuzzwordResult {

public:
    Buzzword *buzzword;
    int count;

    BuzzwordResult(Buzzword *buzzword, int count);
};


#endif //ISSUE_37C_BUZZWORDMATCH_H
