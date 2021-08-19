#include <iostream>
#define n 100

class Queue{
    public:
        int arr[n], front=-1, rear=-1;
        void enqueue(int x){
            //queue is full
            if(rear == n-1){
                std::cout<<"Queue is full";
            }
            //if the element is the first element
            if(rear==-1 && front ==-1){
                front=0;
                rear=0;
                arr[rear]=x;
            }
            else{
            rear++;
            arr[rear]=x;
            }
            //std::cout<<front<<rear;
        }
        void dequeue(){
            if(rear==-1 && front ==-1){
                std::cout<<"Empty";
            }
            //only one element in a queue
            if (front == rear){
                front=-1;
                rear=-1;
            }
            if(front<rear){
                front++;
            }
        }
         void display(){
             int f=front, r=rear;
             if(rear==-1 && front ==-1){
                std::cout<<"Empty";
            }
            else{
             while(f<=r){
                 std::cout<<arr[f]<<" ";
                 f++;
             }
            }
             std::cout<<"\n";
        }
};
int main() {
    Queue q;
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.display();
    q.dequeue();
    q.dequeue();
    
    q.display();
    return 0;
}
