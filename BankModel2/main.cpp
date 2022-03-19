#include <iostream>
#include "Bank.h"
#include "HDFCBank.h"
#include "CanaraBank.h"
#include "SBIBank.h"
#include "Customer.h"

using namespace std;

int main()
{
    Customer *cc = new Customer;
    cc->selectBank();


    //    Bank *b = new CanaraBank;
    ////    b->createAcc();
    //    b->credit();
    //    b->debit();
    //    b->FDdeposit();
    //    b->displayBranch();
    //    b->deleteAcc();

    Bank *b1 = new HDFCBank;
    b1->createAcc();
    b1->credit();
    b1->debit();
    b1->FDdeposit();
    b1->displayBranch();
    b1->deleteAcc();

//    Bank *b2 = new SBIBank;
//    b2->createAcc();
//    b2->credit();
//    b2->debit();
//    b2->FDdeposit();
//    b2->displayBranch();
//    b2->deleteAcc();
    return 0;
}
