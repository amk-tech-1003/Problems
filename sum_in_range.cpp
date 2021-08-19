#include <iostream>
int sum_in_range(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        sum+=i;
    }
    
    return sum;
}


int main() {
   
    int result = sum_in_range(1, 10);
    
    std::cout<<result;

    return 0;
}
