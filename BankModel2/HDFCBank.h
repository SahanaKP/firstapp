#ifndef HDFCBANK_H
#define HDFCBANK_H
#include<iostream>
using namespace std;
#include "Bank.h"
#include "HDFCBankBranch.h"

class HDFCBank : public Bank
{
public:
    HDFCBank();
    ~HDFCBank();

    void init();
    void print();
    void createAcc();
    void deleteAcc();
    int  credit();
    int  debit();
    int  FDdeposit();
    void displayBranch();

private:

    HDFCBankBranch *m_hdfcbHassan;
    HDFCBankBranch *m_hdfcbMysore;
    HDFCBankBranch *m_hdfcbBangalore;

};

#endif // HDFCBANK_H
