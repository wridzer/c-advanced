//
// Created by wridz on 15/11/2021.
//

#ifndef ASSIGNMENT_1___BANKREKENING_TRANSACTION_H
#define ASSIGNMENT_1___BANKREKENING_TRANSACTION_H

#include "string"

using namespace std;

class Transaction {
public:
    Transaction();
    ~Transaction();

    float amount;
    string date;
};


#endif //ASSIGNMENT_1___BANKREKENING_TRANSACTION_H
