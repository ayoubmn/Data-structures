#include <iostream>
#include "stack.h"
using namespace std;

int main(){

};

Stack::~Stack(void){
    delete [] Stack::Tab;
}
bool Stack::push(int key){
    if(key>=(MAX-1))
        return false;
    else{
        Tab(++ Stack::Top)=key;
        return true;
    }
}

int Stack::top(){
   if(Stack::Top>=0)
        return Stack::Tab[Stack::Top];
}

int Stack::pop(){
    if(Stack::Top>=0){
        int current=Stack::Tab[Stack::Top];
        --Top;
        return current;
    }
}

bool Stack::isEmpty(){
    return (Top < 0);
}


