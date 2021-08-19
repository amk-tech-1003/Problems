#include <iostream>
int sum_digits(long long n){
    static int sum=0;
    if(n!=0){
       sum+=n%10;
        n /= 10;
        return sum_digits(n);// n = n/10
        
    }
    return sum;
}


int main() {
   
    int result = sum_digits(1234);
    
    std::cout<<result;

    return 0;
}
