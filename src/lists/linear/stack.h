#ifndef STACK_H
#define STACK_H

#define MAX 1000

template<class Tab>
Class Stack{
private:
    int Tab[MAX]; // Maximum size of Stack
    int size;
    int top;
public:
     Stack(){
        top = -1;
     }//construction

    ~Stack(void);//destruction

    bool puch(int Key);//adds key to collection

    int top();//return most recently add-key

    int pop();//removes most recently add-key and return it

    bool isEmpty();//true if empty ,false if not


};

#endif