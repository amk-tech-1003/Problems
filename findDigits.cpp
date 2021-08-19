#include <iostream>
int digits(long long n){
    int count=0;
   while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
    return count;
}


int main() {
   
    int result = digits(12345678912);
    
    std::cout<<result;

    return 0;
}
