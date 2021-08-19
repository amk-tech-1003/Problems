#include <iostream>
#define n 10
class Stack{
    public:
        int top=-1;
        int arr[n];
        void push(int x){
            if(top == n-1){
                std::cout<<"Stack is overflow";
            }
            top++;
            arr[top]=x;
        }
        void pop(){
            //if stack is empty than top is -1
            if(top<0){
                std::cout<<"Stack is empty";
            }
            top--;
            std::cout<<"\n";
        }
        void display(){
            if(top == -1){
                std::cout<<"Stack is empty";
            }
            int i=top;
            while (i> -1){
                std::cout<<arr[i]<<" ";
                i--;
            }
            std::cout<<"\n";
        }
        void topval(){
            std::cout<<top;
            std::cout<<"\n";
        }
};
int main() {
    // Write C++ code here
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.topval();
    s.display();
    s.pop();
    s.display();

    return 0;
}
