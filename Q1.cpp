#include<iostream>
int main() {
    std::cout<<"Enter the marks of students :";
    int a;
    int b;
    int c;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    float avg = (a + b + c) / 3;
    std::cout<<avg<<std::endl;
    return 0;
}