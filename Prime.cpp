#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the Number : ";
    std::cin>>n;
    int count = 0;
    if(n >= 2) {
        for(int i = 1;i*i <= n;i++) {
        if(n % i == 0) {
            if(n / i == i) {
                count++;
            }else {
                count += 2;
            }
            if(count > 2) break;
        }
    }
}
    if(count > 2 || n < 2) {
            std::cout<<"Not a Prime Number";
        }else {
            std::cout<<"Prime Number";
    }
}