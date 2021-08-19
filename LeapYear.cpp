#include <iostream>
void leapYear(int year){
    if(year%4 == 0){
        if(year%100 ==0){
            if(year%400 == 0){
                std::cout<<"Leap";
            }
            else{
                std::cout<<"Not";
            }
        }
        else{
            std::cout<<"Leap";
        }
    }
    else{
        std::cout<<"Not";
    }
}

int main() {
    leapYear(2021);
    return 0;
}
