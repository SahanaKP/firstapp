#ifndef BANK_H
#define BANK_H
#include<iostream>
using namespace std;

class Bank
{
protected:
    Bank();
public:
    ~Bank();
    static Bank *instance();
    void init();
    void print();
    virtual void createAcc();
    virtual void deleteAcc();
    virtual int  credit();
    virtual int  debit();
    virtual int  FDdeposit();
    virtual void displayBranch();


protected:
    static Bank *m_bank;

    string m_address;
    int m_pin;
    string m_city;
    int m_accno;
//    int m_accbal;
};

#endif // BANK_H
