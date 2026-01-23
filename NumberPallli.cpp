#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the Number";
    std::cin>>n;
    int ori = n;
    int ans = 0;
    while(n > 0) {
        int rem = n % 10;
        ans = ans*10 + rem;
        n = n/10;
    }
    if(ans == ori) {
        std::cout<<"Is Pallindrome";
    }else {
        std::cout<<"Not A Pallindrome";
    }
    return 0;
}