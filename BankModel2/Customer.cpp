#include "Customer.h"

Customer::Customer()
{
 cout<<"Customer constructor called"<<endl;
 init();
}
Customer::~Customer()
{
 cout<<"Customer destructor called"<<endl;
}
void Customer::init()
{
 cout<<"Customer init fun called"<<endl;
// selectBank();
}
void Customer::print()
{
 cout<<"Customer print fun called"<<endl;
// cout<<"Customer name = "<<m_name<<endl;
// cout<<"Customer Phone number ="<<m_phoneno<<endl;
// // cout<<"Customer Account balance ="<<m_accbal<<endl;
}

void Customer::selectBank()
{
 cout<<"Inside Customer select bank function"<<endl;
//  select bank;
//  bank =Canarabank;
//     cout<<"Canarabank ="<<bank<<endl;

//  bank = SBIbank;
//     cout<<"SBIbank ="<<bank<<endl;

//  bank = HDFCbank;
//      cout<<"HDFCbank ="<<bank<<endl;
cout<<"********1.CANARA BANK*******"<<endl;
cout<<"********2.SBI BANK*******"<<endl;
cout<<"********3.HDFC BANK*******"<<endl;


     cout<<"Please select the bank"<<endl;
     int i=-1;
     cin>>i;
     switch(i){
     case Canarabank :
         cout<<"Customer selected Canara Bank "<<endl;
         break;

     case SBIbank :
         cout<<"Customer selected SBI Bank "<<endl;
         break;

     case HDFCbank :
         cout<<"Customer selected HDFC Bank"<<endl;
         break;

     default:
         cout<<"Invalid choice"<<endl;
             break;
   }
 }

const string &Customer::name() const
{
    return m_name;
}

void Customer::setName(const string &newName)
{
    m_name = newName;
}

int Customer::accno() const
{
    return m_accno;
}

void Customer::setAccno(int newAccno)
{
    m_accno = newAccno;
}

int Customer::phoneno() const
{
    return m_phoneno;
}

void Customer::setPhoneno(int newPhoneno)
{
    m_phoneno = newPhoneno;
}

int Customer::accbal() const
{
    return m_accbal;
}

void Customer::setAccbal(int newAccbal)
{
    m_accbal = newAccbal;
}

