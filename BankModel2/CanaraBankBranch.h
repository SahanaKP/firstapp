#ifndef CANARABANKBRANCH_H
#define CANARABANKBRANCH_H
#include "LinkedList.h"
#include "Customer.h"
#include <iostream>
using namespace std;

class CanaraBankBranch
{
public:
    CanaraBankBranch();
    ~CanaraBankBranch();

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

    string m_name;
    int m_phoneno;
    int m_accno;
};

#endif // CANARABANKBRANCH_H
