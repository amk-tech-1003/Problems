#include <iostream>
int Fibonacci(int n)
{
if (n <= 1) 
return n; 
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

int main() {
    int sum=0,n=8;
    while(Fibonacci(sum) <= n)
    {
        printf("%d ", Fibonacci(sum));
        sum++;
    }
    return 0;
}
