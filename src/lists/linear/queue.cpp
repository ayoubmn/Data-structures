#include "queue.h"

template <typename T>
Queue<T>::Queue()
    :m_top(-1)
{
    m_tab = new T[max_size];
}

template <typename T>
Queue<T>::~Queue()
{
    delete[] m_tab;
}

template <typename T>
void Queue<T>::push(int key)
{
    if(m_top>=max_size)
        expand();
    m_tab[++m_top]=key;
}

template <typename T>
T Queue<T>::first()
{
    return m_tab[0];
}

template <typename T>
T Queue<T>::pop()
{
    if(m_top < 0)
        throw "Nothing to pop";
    T to_remove =m_tab[0];
    for(int i=0;i<m_top-1;i++){
        m_tab[i]=m_tab[i+1];
    }
    return  to_remove;
}

template <typename T>
void Queue<T>::expand()
{
    max_size*=2;
    T* new_tab=new T[max_size];
    std::copy(m_tab, m_tab + max_size, new_tab);
    delete [] m_tab;
    m_tab = new_tab;

}

template class Queue<int>;
template class Queue<float>;
template class Queue<double>;
