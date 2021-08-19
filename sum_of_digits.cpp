int sum_digits(long long n){
    int sum=0;
   while (n != 0) {
       sum+=n%10;
        n /= 10;     // n = n/10
        
    }
    return sum;
}


int main() {
   
    int result = sum_digits(123456789123);
    
    std::cout<<result;

    return 0;
}
