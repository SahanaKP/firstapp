#include "HDFCBank.h"
enum branch{
    hdfcbranchhassan = 1,
    hdfcbranchmysore,
    hdfcbranchbangalore
};

HDFCBank::HDFCBank()
{
 cout<<"HDFC Bank constructor called"<<endl;
 init();
}

HDFCBank::~HDFCBank()
{
 cout<<"HDFC Bank constructor called"<<endl;
}

void HDFCBank::init()
{
 cout<<"Inside HDFC Bank init function"<<endl;
 cout<<"********1.HDFC BANK Branch Hassan*******"<<endl;
 cout<<"********2.HDFC BANK Branch Mysore*******"<<endl;
 cout<<"********3.HDFC BANK Branch Bangalore*******"<<endl;

 cout<<"Please select the Bank branch"<<endl;
 int i=-1;
 cin>>i;
 switch(i){
 case hdfcbranchhassan :
     cout<<"Customer selected Canara bank branch Hassan"<<endl;
     m_hdfcbHassan = new HDFCBankBranch;
     break;

 case hdfcbranchmysore :
     cout<<"Customer selected Canara bank branch Bangalore"<<endl;
     m_hdfcbMysore = new HDFCBankBranch;
     break;

 case hdfcbranchbangalore :
     cout<<"Customer selected Canara bank branch Shimoga"<<endl;
     m_hdfcbBangalore = new HDFCBankBranch;
     break;

 default: cout<<"Invalid choice"<<endl;
 break;

     print();
}
}

void HDFCBank::print()
{
 cout<<"Inside HDFC Bank print function"<<endl;
// cout<<"HDFC bank customer account number ="<<m_accno<<endl;
//// cout<<"HDFC bank customer account balance ="<<m_accbal<<endl;
// cout<<"HDFC bank address ="<<m_address<<endl;
// cout<<"pin code  ="<<m_pin<<endl;
// cout<<"city ="<<m_city<<endl;
}

void HDFCBank::createAcc()
{
 cout<<"Customer created account in HDFC Bank"<<endl;
}

int HDFCBank::credit()
{
 cout<<"Customer has a credit card"<<endl;
}

void HDFCBank::deleteAcc()
{
 cout<<"Customer delete account in HDFC Bank"<<endl;
}


int HDFCBank::debit()
{
  cout<<"Inside HDFC Bank debit  function"<<endl;

}

int HDFCBank::FDdeposit()
{
    cout<<"Inside HDFC Bank FD deposit  function"<<endl;
}

void HDFCBank::displayBranch()
{
 cout<<"Inside HDFC Bank Display branch function"<<endl;
}
