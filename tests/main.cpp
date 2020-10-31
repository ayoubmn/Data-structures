#include "../src/lists/linear/queue.h"
#include <iostream>

int main(){

    Queue<int> my_queue;
    my_queue.push(5);
    my_queue.push(10);
    my_queue.push(15);
    my_queue.push(20);

    std::cout<<my_queue.first()<<std::endl;
    my_queue.pop();
    my_queue.print();

    return 0;
}