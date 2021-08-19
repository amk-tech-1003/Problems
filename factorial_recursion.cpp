#include <iostream>
int factorial(int n){
    if( n==0)
        return 1;
    return (n*factorial(n-1));
}

int main() {
    int result = factorial(5);
    std::cout<<result;
    return 0;
}
