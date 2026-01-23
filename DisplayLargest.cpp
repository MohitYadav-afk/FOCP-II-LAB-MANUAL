#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the Total Number : ";
    std::cin>>n;
    int max = INT_MIN;
    int a;
    for(int i = 1;i <= n;i++) {
        std::cout<<"Enter the "<<i<<" Number : ";
        std::cin>>a;
        if(a > max) max = a;
    }
    std::cout<<"Max of All Numbers is : "<<max;
    return 0;
}