#include <iostream>
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main() {
    int result = factorial(5);
    std::cout<<result;
    return 0;
}
