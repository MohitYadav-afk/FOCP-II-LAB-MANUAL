#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the length of Diamond : ";
    std::cin>>n;
    //first Half
    for(int i = 0;i < n;i++) {
        //spaces
        for(int j = 0;j < n - i - 1;j++) {
            std::cout<<" ";
        }
        //star
        std::cout<<"*";
        //spaces
        for(int j = 0;j <= 2*i - 1;j++) {
            std::cout<<" ";
        }
        //star
        if(i != 0) std::cout<<"*";
        std::cout<<std::endl;
    }
    //Second Half
    int spaces = 0;
    for(int i = n;i < 2 * n - 1;i++) {
        //spaces
        for(int j = 0;j < i - n + 1;j++) {
            std::cout<<" ";
        }
        //star
        std::cout<<"*";
        //spaces
        for(int j = 0;j < n - spaces + 1;j++) {
            std::cout<<" ";
        }
        spaces += 2;
        //star
        if(i != 2*n - 2) std::cout<<"*"<<std::endl;
    }
    return 0;
}