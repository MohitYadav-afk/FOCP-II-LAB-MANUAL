#include<iostream>
int main() {
    int items;
    float price;
    std::cout<<"Enter the Items : ";
    std::cin>>items;
    std::cout<<"Enter the Price : ";
    std::cin>>price;
    float bill = items * price;
    if(items > 1000) {
        float disc = bill - (bill * 0.1);
        std::cout<<"Net Bill is : "<<disc;
    }else {
        std::cout<<"Net Bill is : "<<bill;
    }
    return 0;
}