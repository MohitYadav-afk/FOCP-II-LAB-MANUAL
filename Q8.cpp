#include<iostream>
int main() {
    int n;
    int id;
    std::cout<<"Enter the Number of employees : ";
    std::cin>>n;
    for(int i = 0;i < n;i++) {
        std::cout<<"Enter the ID of Employee : ";
        std::cin>>id;
        if(id % 3 == 0 && id % 5 == 0) {
            std::cout<<"Buzz Fuzz"<<std::endl;
        }else if(id % 3 == 0) {
            std::cout<<"Buzz"<<std::endl;
        }else if(id % 5 == 0) {
            std::cout<<"Fuzz"<<std::endl;
        }else {
            std::cout<<"Invalid"<<std::endl;
        }
    }
    return 0;
}