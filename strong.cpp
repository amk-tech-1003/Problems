#include <iostream>

int factorial(int n){
    if( n==0)
        return 1;
    return (n*factorial(n-1));
}
void strong(int n){
    int sum=0,temp, fact,num=n;
    while(n!=0){
        temp=n%10;
        fact=factorial(temp);
        sum+=fact;
        n/=10;
    }
    if(sum == num)
        std::cout<<"Strong Number\n";
    else
        std::cout<<"not\n";
}

int main() {
    strong(14);
    strong(145);
    
    return 0;
}
