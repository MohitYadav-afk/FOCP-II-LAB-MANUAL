#include<iostream>
int main() {
    int a;
    int b;
    int c;
    std::cout<<"Enter the Sides : ";
    std::cin>>a>>b>>c;
    if(a == b && b == c) {
        std::cout<<"Triangle is Equilateral";
    }else if(a != b && b != c && c != a) {
        std::cout<<"Triangle is Scalene";
    }else {
        std::cout<<"Triangle is Isosceles";
    }
    return 0;
}