#include <iostream>

int prime(int n, int i){
    if(i==1)
        return 1;
    if(n%i == 0)
        return 0;
    return prime(n, i-1);
}

int main() {
    int p = prime(17,17/2);
    if(p==1)
        std::cout<<"Prime";
    else
        std::cout<<"not";
    return 0;
}
