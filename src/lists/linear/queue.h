#pragma once

#include <iostream>

template <typename T>
class Queue{
private:
    T*  m_tab;
    int m_top;
    unsigned max_size=5;
    static const short growth_factor=2;
public:
    Queue();
    ~Queue();
    /*Add a key to the queue*/
    void push(int key);
    /*Remove & return the first added key*/
    T pop();
    /*return the first added key*/
    T first();

    inline bool isEmpty() const{
        return (m_top < 0);
    };

    void expand();

    /*Display the queue*/
    inline void print(){
        std::cout<<"\n";

        if(m_top < 0){
            std::cout<<"[ Empty queue ]";
            return;
        }
        /* TODO: use iterators */
        for(unsigned long i = 0; i < m_top; i++){
            std::cout<<"["<<m_tab[i]<<"]";
        }
    };


};


