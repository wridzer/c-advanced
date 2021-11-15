//
// Created by wridz on 15/11/2021.
//

#ifndef ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
#define ASSIGNMENT_1___BANKREKENING_BANKREKENING_H

#include "Transaction.h"
#include "TranactionHistory.h"
#include <string>

class Bankrekening {
public:
    Bankrekening(float _saldo);
    ~Bankrekening();

    const int getSaldo() const;
    const std::string getHistory() const;

    Bankrekening operator+(const Transaction& transaction) const;
    Bankrekening operator-(const Transaction& transaction) const;
    Bankrekening& operator+=(const Transaction& transaction);
private:
    const TranactionHistory transactionHistory;
    float const saldo;
};


#endif //ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
