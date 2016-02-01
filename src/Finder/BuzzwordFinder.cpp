//
// Created by Edward Pfremmer on 1/29/16.
//

#include "BuzzwordFinder.h"

BuzzwordFinder::BuzzwordFinder(std::string input) {
    this->input = new SearchableString(input);
}

BuzzwordResult* BuzzwordFinder::find(Buzzword *buzzword) {
    int count = this->input->search(buzzword->getValue());

    return new BuzzwordResult(buzzword, count);
}
