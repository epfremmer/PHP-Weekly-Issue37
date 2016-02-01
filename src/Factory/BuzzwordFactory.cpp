//
// Created by Edward Pfremmer on 1/30/16.
//

#include "BuzzwordFactory.h"

Buzzword* BuzzwordFactory::make(const std::string &string) {
    return new Buzzword(string);
}
