#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
using namespace std;

enum select{
    Canarabank =1,
    SBIbank,
    HDFCbank
};

class Customer
{
public:
    Customer();
    ~Customer();
    void init();
    void print();
    void selectBank();

    const string &name() const;
    void setName(const string &newName);

    int accno() const;
    void setAccno(int newAccno);

    int phoneno() const;
    void setPhoneno(int newPhoneno);
    int accbal() const;
    void setAccbal(int newAccbal);

private:
    string m_name;
    int m_phoneno;
    int m_accno;
    int m_accbal;

};

#endif // CUSTOMER_H

