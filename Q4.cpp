#include<iostream>
int main() {
    int quantity;
    float price;
    std::cout<<"Enter the Quantity and Price : ";
    std::cin>>quantity>>price;
    float bill = quantity * price;
    float discount = bill - (bill * 20/100);
    std::cout<<"Bill After Discount is : "<<discount;
    return 0;
 }