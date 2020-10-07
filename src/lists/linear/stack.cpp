#include <iostream>
#include "stack.h"

template <typename T>
Stack<T>::Stack()
     :m_top(-1)
{
     m_tab = new T[max_size];
}

template <typename T>
Stack<T>::~Stack(){
     delete [] m_tab;
}

template <typename T>
void Stack<T>::push(T key){
     if(m_top == max_size)
          expand();
     m_tab[++m_top] = key;
}

template <typename T>
T Stack<T>::top() const{
     return (m_top >= 0)? m_top: -1;
}

template <typename T>
T Stack<T>::pop(){
     if(m_top < 0)
          throw "Nothing to pop";
     return m_tab[m_top--];
}
template <typename T>
void Stack<T>::expand(){
     max_size *= 2;
     T* new_tab = new T[max_size]; 
     std::copy(m_tab, m_tab + max_size, new_tab);
     delete [] m_tab;
     m_tab = new_tab;
}

template class Stack<int>;
template class Stack<float>;
template class Stack<double>;

