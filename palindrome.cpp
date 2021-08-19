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
void palindrome(int n){
    int rev = reverse_number(n);
    if(n == rev){
        std::cout<<"Palindrome \n";
    }
    else
        std::cout<<"not\n";
}

int main() {
   palindrome(1234);
   palindrome(121);
    return 0;
}
