#include<iostream>
int main() {
    char ch;
    std::cout<<"Enter the Character : ";
    std::cin>>ch;
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        std::cout<<"Vowel";
    }else {
        std::cout<<"Consonant";
    }
    return 0;
}