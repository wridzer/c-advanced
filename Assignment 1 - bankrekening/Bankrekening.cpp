//
// Created by wridz on 15/11/2021.
//

#include "Bankrekening.h"

Bankrekening::Bankrekening(int const accountNumber) {
    this -> accountNumber = accountNumber;
}

Bankrekening::~Bankrekening() {

}

void Bankrekening::AddTransaction(const std::string &name, float amount) {
    history.push_back(Transaction(name, amount));
    saldo = saldo + amount;
}

const float Bankrekening::getSaldo() const {
    return saldo;
}

std::ostream& Bankrekening::getHistory(std::ostream& os) const {
    string historyOutput;
    for (int i = 0; i < history.size(); ++i) {
        os << history[i].getName()
           << " : " << history[i].getAmount()
           << std::endl;
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const Bankrekening& bankrekening) {
    bankrekening.getHistory(os);
    os  << " SALDO = " << bankrekening.saldo
        << std::endl;
    return os;
}