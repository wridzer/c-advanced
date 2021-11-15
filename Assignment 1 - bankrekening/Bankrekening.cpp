//
// Created by wridz on 15/11/2021.
//

#include "Bankrekening.h"

Bankrekening::Bankrekening(float const _saldo) {
    TranactionHistory* transactionHistory = new TranactionHistory();
    this -> saldo = _saldo;
}

Bankrekening::~Bankrekening() {

}

const int Bankrekening::getSaldo() const {

}

const std::string Bankrekening::getHistory() const {

}

Bankrekening Bankrekening::operator+(const Transaction &transaction) const {
    //TranactionHistory += transaction;
    saldo = saldo + transaction.amount;

}