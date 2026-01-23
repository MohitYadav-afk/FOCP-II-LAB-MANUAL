#include<iostream>
#include<string>

int main() {
    std::string str;
    std::cout<<"Enter the ID : ";
    getline(std::cin,str);

    int i = 0;
    int j = str.length() - 1;
    int flag = 0;

    while(i < j) {
        if(str.at(i) != str.at(j)) {
            flag = 1;
        }
        i++;
        j--;
    }
    if(flag == 1) {
        std::cout<<"Not a Pallindrome";
    }else {
        std::cout<<"Pallindrome";
    }
    return 0;
}