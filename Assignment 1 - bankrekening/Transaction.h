//
// Created by wridz on 15/11/2021.
//

#ifndef ASSIGNMENT_1___BANKREKENING_TRANSACTION_H
#define ASSIGNMENT_1___BANKREKENING_TRANSACTION_H
#pragma once
#include "string"

using namespace std;

class Transaction {
    public:
        Transaction(string name, float amount);
        ~Transaction();

        const std::string& getName() const;
        float getAmount() const;

    private:
        float amount;
        string name;
};


#endif //ASSIGNMENT_1___BANKREKENING_TRANSACTION_H
