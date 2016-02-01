//
// Created by Edward Pfremmer on 1/29/16.
//

#ifndef ISSUE_37C_SEARCHRESULTCOUNTER_H
#define ISSUE_37C_SEARCHRESULTCOUNTER_H

#include <map>
#include <string>
#include <ostream>
#include "../Result/BuzzwordResult.h"

class SearchResultCounter {
    std::vector<BuzzwordResult*> results;

public:
    void add(BuzzwordResult*);
    int total();
    bool each(std::function<bool (BuzzwordResult *result)>);
    friend std::ostream& operator<<(std::ostream& os, SearchResultCounter& resultCounter);
};


#endif //ISSUE_37C_SEARCHRESULTCOUNTER_H
