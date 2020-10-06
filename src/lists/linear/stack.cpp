#include <iostream>
#include "stack.h"
using namespace std;

int main(){

};

Stack::Stack(int s){
    data=new Tab(size = (s > 0 ? s : 1));
}
Stack::~Stack(void){
    if(data)
        delete [] data;
}