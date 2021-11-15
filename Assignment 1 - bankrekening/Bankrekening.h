//
// Created by wridz on 15/11/2021.
//

#ifndef ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
#define ASSIGNMENT_1___BANKREKENING_BANKREKENING_H

#include "Transaction.h"


class Bankrekening {
public:
    Bankrekening();
    ~Bankrekening();

    

    Bankrekening operator+(const Transaction& transaction) const;
    Bankrekening operator-(const Transaction& transaction) const;
    Bankrekening& operator+=(const Transaction& transaction);
private:

};


#endif //ASSIGNMENT_1___BANKREKENING_BANKREKENING_H
