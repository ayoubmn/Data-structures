#pragma once

#include <iostream>

template <typename T>
class Stack{
private:
    T*              m_tab;
    int             m_top;
    unsigned int    max_size = 5;

    static const short growth_factor = 2;
public:
    Stack();
    ~Stack();
    
    /* Adds a key to the stack */
    void push(T Key);
    
    /* Removes and returns the most recently added key */
    T pop();

    /* Returns the most recently added key */
    T top() const;

    inline bool isEmpty() const{
        return (m_top < 0);
    };

    void expand();

    inline void print() const{
        std::cout<<"\n";

        if(m_top < 0){
            std::cout<<"[ Empty stack ]";
            return;
        }
        /* TODO: use iterators */
        for(unsigned long i = 0; i < m_top; i++){
            std::cout<<"["<<m_tab[i]<<"]";
        }
    };
};
