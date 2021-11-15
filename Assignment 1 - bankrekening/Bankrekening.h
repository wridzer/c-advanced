//
// Created by wridz on 15/11/2021.
//

#ifndef ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
#define ASSIGNMENT_1___BANKREKENING_BANKREKENING_H

#pragma  once
#include <vector>
#include "Transaction.h"
#include <string>
#include <ostream>

class Bankrekening {
public:
    Bankrekening(int const accountNumber);
    ~Bankrekening();

    void AddTransaction(const std::string& name, float amount);
    const float getSaldo() const;
    std::ostream& getHistory(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, const Bankrekening& bankrekening);

private:
    std::vector<Transaction> history;
    float saldo = 0;
    int accountNumber;
};


#endif //ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
