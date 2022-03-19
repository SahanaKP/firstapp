#include "CanaraBank.h"

enum branch{
    cnrbBranchHassan =1,
    CnrbBranchBangalore,
    CnrbBranchshimoga
};

CanaraBank::CanaraBank()
{
 cout<<"Inside Canara Bank constructor called"<<endl;
 init();
}


CanaraBank::~CanaraBank()
{
 cout<<"Inside Canara Bank destructor called"<<endl;
}

void CanaraBank::init()
{
    cout<<"Canara bank init fun called"<<endl;
    cout<<"********1.CANARA BANK Branch Hassan*******"<<endl;
    cout<<"********2.CANARA BANK Branch Bangalore*******"<<endl;
    cout<<"********3.CANARA BANK Branch Shimoga*******"<<endl;

    cout<<"Please select the Bank branch"<<endl;
    int i=-1;
    cin>>i;
    switch(i){
    case cnrbBranchHassan :
        cout<<"Customer selected Canara bank branch Hassan"<<endl;
        m_cnbrhassan = new CanaraBankBranch;
        break;

    case CnrbBranchBangalore :
        cout<<"Customer selected Canara bank branch Bangalore"<<endl;
        m_cnbrbangalore = new CanaraBankBranch;
        break;

    case CnrbBranchshimoga :
        cout<<"Customer selected Canara bank branch Shimoga"<<endl;
        m_cnbrshimoga = new CanaraBankBranch;
        break;

    default: cout<<"Invalid choice"<<endl;
    break;

        print();
}
}

void CanaraBank::print()
{
    cout<<"Canara bank print fun called"<<endl;
    cout<<"Canara bank customer account number ="<<m_accno<<endl;
//    cout<<"Canara bank customer account balance ="<<m_accbal<<endl;
    cout<<"Canara bank address ="<<m_address<<endl;
    cout<<"pin code  ="<<m_pin<<endl;
    cout<<"city ="<<m_city<<endl;

//    createAcc();
}

void CanaraBank::createAcc()
{
    cout<<"Inside Canara bank create acc function"<<endl;
    credit();
}

void CanaraBank::deleteAcc()
{
 cout<<"Inside canara bank delete function"<<endl;
}

int CanaraBank::credit()
{
 cout<<"Customer has a credit card"<<endl;
 debit();
}

int CanaraBank::debit()
{
    cout<<"Customer has debit card"<<endl;
    FDdeposit();
}

int CanaraBank::FDdeposit()
{
    cout<<"Customer has to deposit"<<endl;
    displayBranch();
}


void CanaraBank::displayBranch()
{
 cout<<"display branch of Customer in Canara Bank"<<endl;
}
