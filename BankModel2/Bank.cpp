#include "Bank.h"
Bank* Bank :: m_bank = nullptr;

Bank::Bank()
{
 cout<<"Bank constructor called"<<endl;
}
Bank::~Bank()
{
 cout<<"Bank destructor called"<<endl;
}
Bank *Bank::instance()
{
 if(m_bank == nullptr){
     m_bank = new Bank;
 }
 return m_bank;
}

void Bank::init()
{
 cout<<"Inside Bank init function "<<endl;
}

void Bank::print()
{
 cout<<"Inside Bank print function "<<endl;
}

void Bank::createAcc()
{
 cout<<"Inside Bank create Account function"<<endl;
}

void Bank::deleteAcc()
{
 cout<<"Inside Bank delete Account function"<<endl;
}

int Bank::credit()
{
 cout<<"Inside Bank credit function "<<endl;
}

int Bank::debit()
{
 cout<<"Inside Bank debit function "<<endl;
}

int Bank::FDdeposit()
{
 cout<<"Inside Bank FDdeposit function "<<endl;
}

void Bank::displayBranch()
{
    cout<<"Inside Bank display branch function "<<endl;
}

