//
// Created by Edward Pfremmer on 1/30/16.
//

#include "Buzzword.h"

Buzzword::Buzzword(const std::string &value) {
    this->value = value;
}

std::string Buzzword::getValue() {
    return this->value;
}
