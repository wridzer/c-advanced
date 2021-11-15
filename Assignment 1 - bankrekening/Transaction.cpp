//
// Created by wridz on 15/11/2021.
//

#include "Transaction.h"

Transaction::Transaction(string name, float amount) {
    this -> amount = amount;
    this -> name = name;
}

Transaction::~Transaction() {

}

const std::string& Transaction::getName() const {
    return name;
}

float Transaction::getAmount() const {
    return amount;
}
