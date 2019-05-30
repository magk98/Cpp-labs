#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string.h>
#include <memory>
using namespace std;

template <typename T> class Node;
template <typename T> class List;
template <typename T> ostream& operator<<(ostream&,const Node<T>&);
template <typename T> ostream& operator<<(ostream&,const List<T>&);

template <typename T>
class Node
{
    private:
        T val;
        unique_ptr<Node> next = nullptr;
        string toStr () const {return to_string(val) + " ";}
    public:
        Node(const Node<T> &other) = delete;
        Node<T>& operator=(const Node<T> &other) = delete;
        ~Node(){cout << "Delete: " << val << endl;}
        Node<T>* getNext() { return next.get(); }

        Node(T val_): val(val_) {};


    friend ostream& operator<< <T>(ostream&, const Node<T>&);
    friend class List<T>;
};

template <typename T>
class List
{
    private:
        unique_ptr<Node <T>> head;

    public:
        List(const List<T> &other) = delete;
        List<T>& operator=(const List<T> &other) = delete;

        List(): head(nullptr) {};
        void insert(T val);
        void remove();

    friend ostream& operator<< <T>(ostream&, const List<T>&);
};

class Excp
{
    private:
        string msg;
    public:
        Excp(string msg_): msg(msg_) {};
        string getMsg() { return msg; }
};

//IMPLEMENTATION:

//Node

template <typename T>
ostream& operator<<(ostream& os, const Node<T>& node)
{
    os << node.toStr();
    return os;
}

// List

template <typename T>
ostream& operator<<(ostream& os, const List<T>& l)
{
    Node<T>* ptr = l.head.get();
    while(ptr!=nullptr)
    {
        os << *ptr;
        ptr = ptr->getNext();
    }
    return os;
}


template <typename T>
void List<T>::insert (T val)
{
    unique_ptr<Node <T>> tmp = make_unique<Node <T>>(val);
    tmp->next = move(head);
    head = move(tmp);
}

template <typename T>
void List<T>::remove()
{
    if (head==nullptr)
        throw Excp("Cannot remove from empty list");
    unique_ptr<Node <T>> tmp = move(head);
    head = move(tmp->next);
}


#endif // LIST_H


