#include<iostream>
int main() {
    int a;
    int b;
    std::cin>>a;
    std::cin>>b;
    a ^= b;
    b ^= a;
    a ^= b;
    std::cout<<a<<std::endl<<b; 
    return 0;
}