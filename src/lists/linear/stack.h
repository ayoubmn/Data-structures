#ifndef STACK_H
#define STACK_H

template<class T>
class Stack{
private:
    int* Tab; // Maximum size of Stack
    int Top=-1;
    static const int growth_factor = 2;

public:
    int max_size = 5;

    Stack();//construction

    ~Stack();//destruction

    void push(int Key);//adds key to collection

    int top();//return most recently add-key

    int pop();//removes most recently add-key and return it

    bool isEmpty();//true if empty ,false if not

    void increase(){
        max_size = max_size*2;
        T* Tab2= new T[max_size];
        for(int i=0;i<Top+1;i++)
            Tab2[i]=Tab[i];
        delete [] Tab;
        Tab=Tab2;
        delete [] Tab2;
    }

};

#endif