#include <iostream>

void prime(int *n){
    
    int i=1,count=0;
    while(i<=*n){
        if(*n%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        std::cout<<"Prime";
    }
    else
        std::cout<<"not";
}

int main() {
    
    int n =17;
    int *p;
    p=&n;
    prime(p);
    return 0;
}
