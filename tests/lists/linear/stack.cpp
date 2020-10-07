/*
 * Demo for the Stack class
 */

#include <lists/linear/stack.h>
#include <iostream>

int stack_test_menu();
void stack_test_show();
void stack_test_push();
void stack_test_pop();

void (*cmds[])(void) = {
     &stack_test_show,
     &stack_test_push,
     &stack_test_pop
};

Stack<int> my_stack;

int main(void){
     int choice;
     do{
          choice = stack_test_menu();
          if(choice) cmds[choice - 1]();
     }while(choice != 0);
     return 0;
}

int stack_test_menu(){
     int choice = -1;
     do{
          std::cout << "\n*** Stack test ***\n"
                         << "\t1. show\n"
                         << "\t2. push\n"
                         << "\t3. pop\n"
                         << "\t0. exit\n";
          std::cout << ">";
          std::cin >> choice;
          if(choice > 3 || choice < 0){
               std::cout << "[!] Invalid choice \n";
               choice = -1;
          }
     } while(choice < 0);
     return choice;
}

void stack_test_show(){
     my_stack.print();
}

void stack_test_push(){
     int push_value;
     std::cout<< "\nValue : ";
     std::cin >> push_value;
     my_stack.push(push_value);
}

void stack_test_pop(){
     int pop_value;
     try{
          pop_value = my_stack.pop();
     } catch(const char* msg){
          std::cout<< msg;
          return;
     }
     std::cout<< "\nPop-ed : "
               << pop_value;
}
