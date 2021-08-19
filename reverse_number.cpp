#include <iostream>
int reverse_number(int n){
    int rem, rev=0;
    while(n!=0){
        rem=n%10;
        rev = (rev*10) + rem;
        n/=10;
    }
    return rev;
}


int main() {
   
    int result = reverse_number(1234);
    
    std::cout<<result;

    return 0;
}
