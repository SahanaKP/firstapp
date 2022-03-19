#include "HDFCBankBranch.h"

HDFCBankBranch::HDFCBankBranch()
{
 cout<<"HDFC Branch constructor called"<<endl;
 m_custLL = new List<Customer>;
 init();
}

HDFCBankBranch::~HDFCBankBranch()
{
 cout<<"HDFC Branch destructor called"<<endl;
}
void HDFCBankBranch::init()
{
  cout<<"Inside Canara Branch init function"<<endl;
  createAcc();

}
void HDFCBankBranch::print()
{
    cout<<"Inside Canara Branch print function"<<endl;
    cout<<"customer name = "<<m_name<<endl;
    cout<<"Customer phone number ="<<m_phoneno<<endl;
}

void HDFCBankBranch::createAcc()
{
    cout<<"Inside Canara Branch create account function"<<endl;

    cout<<"Enter customer name"<<endl;
    cin>>m_name;
    cout<<"Enter customer phone number"<<endl;
    cin>>m_phoneno;
    print();
    m_accno = rand();
    cout<<"Customer account number = HDFC123456"<<m_accno<<endl;
    m_accno++;


    for(int i=1;i<3;i++){
        m_cust = new Customer;
        m_custLL->addData(m_cust,m_cust);
      }


        m_cust->init();
        m_custLL = new List<Customer>;

    cout<<"Customer created account in HDFC bank"<<endl;
}

void HDFCBankBranch::deleteAcc()
{
cout<<"Customer deleted account in Canara Bank"<<endl;
}
int HDFCBankBranch::credit()
{
    cout<<"Customer has a credit card of canara bank"<<endl;
    m_custLL = new List<Customer>;

    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer credited amount in Canara Bank"<<endl;
}
int HDFCBankBranch::debit()
{
    cout<<"Customer has debit card"<<endl;
    m_custLL = new List<Customer>;
    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer debited amount from Canara Bank"<<endl;
}
int HDFCBankBranch::FDdeposit()
{
    cout<<"Customer has to deposit"<<endl;
    m_custLL = new List<Customer>;
    m_custLL->addData(m_cust,m_cust);
    cout<<"Customer deposit amount in Canara Bank"<<endl;
}

void HDFCBankBranch::displayBranch()
{
    cout<<"display branch of Customer in Canara Bank"<<endl;
}

int HDFCBankBranch::getAccno() const
{
    return m_accno;
}

void HDFCBankBranch::setAccno(int newAccno)
{
    m_accno = newAccno;
}
