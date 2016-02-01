//
// Created by Edward Pfremmer on 1/29/16.
//

#include "SearchResultCounter.h"

void SearchResultCounter::add(BuzzwordResult *result) {
    this->results.push_back(result);
}

std::ostream &operator<<(std::ostream &os, SearchResultCounter &resultCounter) {
    resultCounter.each([&](BuzzwordResult *result) -> bool {
        if (result->count > 0) {
            os << result->buzzword->getValue() << ": " << result->count << std::endl;
        }

        return true;
    });

    return os << "Total WOW Factor: " << resultCounter.total() << std::endl;
}

int SearchResultCounter::total() {
    int total = 0;

    this->each([&](BuzzwordResult *result) -> bool {
        total += result->count;
        return true;
    });

    return total;
}

bool SearchResultCounter::each(std::function<bool (BuzzwordResult *result)> fn) {
    for(BuzzwordResult *result: this->results) {
        if (!fn(result)) {
            return false;
        }
    }

    return true;
}
