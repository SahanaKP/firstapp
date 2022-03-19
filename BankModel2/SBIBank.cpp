#include "SBIBank.h"

SBIBank::SBIBank()
{
 cout<<"SBI Bank constructor called"<<endl;
 m_sbi = new SBIBankBranch;
 m_cust = new Customer;
 init();
}
void SBIBank::init()
{
    cout<<"SBI bank init fun called"<<endl;
    m_accno = 987654321;
//    m_accbal = 2000;
    m_address = "RR Nagar";
    m_pin = 560403;
    m_city = "Bangalore";
    print();
}

void SBIBank::print()
{
    cout<<"SBI bank print fun called"<<endl;
    cout<<"SBI bank print fun called"<<endl;
//    cout<<"SBI bank customer name ="<<m_custname<<endl;
    cout<<"SBI bank customer account number ="<<m_accno<<endl;
//    cout<<"SBI bank customer account balance ="<<m_accbal<<endl;
    cout<<"SBI bank address ="<<m_address<<endl;
    cout<<"pincode="<<m_pin<<endl;
    cout<<"city ="<<m_city<<endl;
}

void SBIBank::createAcc()
{
 cout<<"Inside SBI Bank create Account function"<<endl;
 int count;
 cout<<"Enter customer Name"<<endl;
 cin>>count;

// m_sbiLL = new List<SBIBankBranch>;
// m_sbiLL->addData(m_sbi);

// m_cust = new Customer;
// for(int i=1;i<count;i++){
//     m_custLL->addData(m_cust);
//     int id;
//     cout<<"Customer account number"<<endl;
//     cin>>id;
//     m_custLL->m_head->m_name->setAccno(id);
 }
//}

void SBIBank::deleteAcc()
{
 cout<<"Inside SBI Bank delete Account function"<<endl;
}

int SBIBank::credit()
{
 cout<<"Inside HDFC Bank credit function"<<endl;
 m_custLL = new List<Customer>;
// m_custLL->addData(m_cust);
 cout<<"Customer credited amount in Canara Bank"<<endl;
 return true;
}

int SBIBank::debit()
{
  cout<<"Inside SBI Bank debit  function"<<endl;
  m_custLL = new List<Customer>;
//  m_custLL->addData(m_cust);
  cout<<"Customer debited amount from Canara Bank"<<endl;
  return true;
}

int SBIBank::FDdeposit()
{
    cout<<"Inside SBI Bank FD deposit  function"<<endl;
    m_custLL = new List<Customer>;
//    m_custLL->addData(m_cust);
    cout<<"Customer depoisted amount in Canara Bank"<<endl;
    return true;
}

void SBIBank::displayBranch()
{
 cout<<"Inside SBI Bank Display branch function"<<endl;
}
