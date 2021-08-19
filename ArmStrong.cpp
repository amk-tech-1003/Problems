#include <iostream>
#include<math.h>

int digits(int n){
    int d=0;
    while(n!=0){
        d++;
        n/=10;
    }
    return d;
}
void armStrong(int n){
    int l = digits(n);
    int temp;
    int num=n;
    int sum=0;
    while(n!=0){
        temp = n%10;
        sum+= pow(temp,l);
        n/=10;
    }
    if(sum == num){
        std::cout<<"ArmStrong";}
    else{
        std::cout<<"Not";}
}
int main() {
   armStrong(1634);
   
    return 0;
}
