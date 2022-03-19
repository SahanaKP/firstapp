#include "CanaraBankBranch.h"

CanaraBankBranch::CanaraBankBranch()
{
 cout<<"Canara Branch constructor called"<<endl;
 m_custLL = new List<Customer>;
 init();
}

CanaraBankBranch::~CanaraBankBranch()
{
    cout<<"Canara Branch destructor called"<<endl;
}

void CanaraBankBranch::init()
{
  cout<<"Inside Canara Branch init function"<<endl;
  createAcc();
}

void CanaraBankBranch::print()
{
    cout<<"Inside Canara Branch print function"<<endl;
    cout<<"customer name = "<<m_name<<endl;
    cout<<"Customer phone number ="<<m_phoneno<<endl;
}

void CanaraBankBranch::createAcc()
{
    cout<<"Inside Canara Branch create account function"<<endl;

    cout<<"Enter customer name"<<endl;
    cin>>m_name;
    cout<<"Enter customer phone number"<<endl;
    cin>>m_phoneno;
    print();


    for(int i=1;i<3;i++){
        m_cust = new Customer;
        m_custLL->addData(m_cust,m_cust);
    }

        m_accno = rand();
        cout<<"Customer account number = CNRB1234569"<<m_accno<<endl;
        m_accno++;
        m_cust->init();
         m_custLL = new List<Customer>;
    cout<<"Customer created account in canara bank"<<endl;
}

void CanaraBankBranch::deleteAcc()
{
cout<<"Customer deleted account in Canara Bank"<<endl;
}

int CanaraBankBranch::credit()
{
    cout<<"Customer has a credit card of canara bank"<<endl;
    m_custLL = new List<Customer>;

    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer credited amount in Canara Bank"<<endl;
}

int CanaraBankBranch::debit()
{
    cout<<"Customer has debit card"<<endl;
    m_custLL = new List<Customer>;
    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer debited amount from Canara Bank"<<endl;
}

int CanaraBankBranch::FDdeposit()
{
    cout<<"Customer has to deposit"<<endl;
    m_custLL = new List<Customer>;
    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer deposit amount in Canara Bank"<<endl;
}

void CanaraBankBranch::displayBranch()
{
 cout<<"display branch of Customer in Canara Bank"<<endl;
}
