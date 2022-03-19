#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
using namespace std;

template <typename T>
class Node
{
public:
    Node();
    void print();
    template<typename  K> friend class List;
//private:
    T* m_name;
    T* m_phoneno;
    Node<T> *m_nextAdd;
};

template <typename T>
void Node<T>::print()
{
    cout<<"Node Print function"<<endl;
}


template <typename T>
class List
{
public:
    List();
    ~List();
    void init();
    void addData(T *n1, T *n2);
    int count();
//private:
    Node<T> *m_head;
};

template <typename T>
List<T>::List()
{
    cout<<"List constructor"<<endl;
    m_head=nullptr;
}

template <typename T>
void List<T>::init()
{
    cout<<"Inside List Init Function"<<endl;
}

template <typename T>
void List<T>::addData(T *n1, T *n2){
    cout<<"LinkList Add dynamic data"<<endl;
    Node<T> *temp;
//    temp=new Node<T>;
    temp->m_name=n1;
    temp->m_phoneno = n2;
    temp->m_nextAdd=NULL;


    if(m_head==NULL)
        m_head=temp;
     cout<<"adding the node complete"<<endl;
   }

template <typename T>
List<T>::~List()
{
    cout<<"List Destructor called"<<endl;
}

#endif // STACK_H
