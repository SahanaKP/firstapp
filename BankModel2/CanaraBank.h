#ifndef CANARABANK_H
#define CANARABANK_H
#include<iostream>
using namespace std;
#include "Bank.h"
#include "CanaraBankBranch.h"

class CanaraBank : public Bank
{
public:
    CanaraBank();
    ~CanaraBank();

    void init();
    void print();
    void createAcc();
    void deleteAcc();
    int  credit();
    int  debit();
    int  FDdeposit();
    void displayBranch();
private:
    CanaraBankBranch *m_cnbrhassan;
    CanaraBankBranch *m_cnbrbangalore;
    CanaraBankBranch *m_cnbrshimoga;
};

#endif // CANARABANK_H
