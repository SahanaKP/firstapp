#ifndef SBIBANK_H
#define SBIBANK_H
#include<iostream>
using namespace std;
#include "Bank.h"
#include "Customer.h"
#include "LinkedList.h"
#include "SBIBankBranch.h"

class SBIBank : public Bank
{
public:
    SBIBank();
    ~SBIBank();

    void init();
    void print();
    void createAcc();
    void deleteAcc();
    int  credit();
    int  debit();
    int  FDdeposit();
    void displayBranch();

private:

    Customer *m_cust;
    List<Customer> *m_custLL;

    SBIBankBranch *m_sbi;
    List<SBIBankBranch> *m_sbiLL;
};

#endif // SBIBANK_H
