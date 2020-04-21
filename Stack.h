#include "LinkedList.h"

template <class T>
class Stack:public LinkedList<T>{
    public:
        virtual bool Delete(T& element);
};

template <class T>
bool Stack<T>::Delete(T& element){
    if(this->current_size){
        Node<T> *delN = this->first;
        this->first = delN->link;
        element = delN->data;
        delete delN;
        this->current_size--;
        return true;
    }
    return false;
}
