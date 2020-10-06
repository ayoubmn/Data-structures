#ifndef STACK_H
#define STACK_H

Class Stack{
private:
    Tab *data;
    int size
public:
    //construction
     Stack(int s);
    //destruction
    ~Stack(void);
    //adds key to collection
    int puch(int Key);
    //return most recently add-key
    int top();
    //removes most recently add-key and return it
    int pop();
    //true if empty ,false if not
    bool empty();


};

#endif