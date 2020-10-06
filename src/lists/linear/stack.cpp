#include <iostream>
#include "stack.h"
using namespace std;

int main(){
/*
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);

    cout<<stack.top()<<endl;
    int i=stack.pop();
    cout<<stack.top()<<endl;
    cout<<i<<endl;
    cout<<"max size is "<<stack.max_size<<endl;
*/
};

template <class T>
Stack<T>::Stack() {
    Stack<T>::Tab = new T[max_size];
}

template <class T>
Stack<T>::~Stack(){
    delete [] Stack::Tab;
}

template <class T>
void Stack<T>::push(int key){
    if(Top==max_size){
        increase();
    }
    Tab[++Top]=key;

}

template <class T>
int Stack<T>::top(){
    if(Top>=0)
        return Tab[Top];
}

template <class T>
int Stack<T>::pop(){
    if(Top>=0){
        int current=Tab[Top];
        --Top;
        return current;
    }
}

template <class T>
bool Stack<T>::isEmpty(){
    return (Top < 0);
}


