#ifndef HDFCBANKBRANCH_H
#define HDFCBANKBRANCH_H
#include "Customer.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;


class HDFCBankBranch
{
public:
    HDFCBankBranch();
    ~HDFCBankBranch();

    void init();
    void print();
    void createAcc();
    void deleteAcc();
    int  credit();
    int  debit();
    int  FDdeposit();
    void displayBranch();

    int getAccno() const;
    void setAccno(int newAccno);

private:
    Customer *m_cust;
    List<Customer> *m_custLL;

    string m_name;
    int m_phoneno;
    int m_accno;
};

#endif // HDFCBANKBRANCH_H
