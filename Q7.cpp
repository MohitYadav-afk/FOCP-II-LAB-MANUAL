#include<iostream>
int main() {
    int a;
    int b;
    int c;
    std::cout<<"Enter the Scores of Three Players : ";
    std::cin>>a>>b>>c;
    int max = INT_MIN;
    if(a > b) {
        if(a > c) {
            max = a;
        }else {
            max = c;
        }
    }else if(b > c) {
        max = b;
    }else {
        max = c;
    }
    std::cout<<"Max is : "<<max;
    return 0;
}