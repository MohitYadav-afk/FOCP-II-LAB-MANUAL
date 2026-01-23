#include<iostream>
int main() {
    int net;
    int bonus;
    int salary;
    int n;
    std::cout<<"Enter the Number of Employees : ";
    std::cin>>n;

    for(int i = 0;i < n;i++) {
        std::cout<<"Enter the Salary of Employees : ";
        std::cin>>salary;
        bonus = salary * 12/100;
        net = salary + bonus;
        std::cout<<"Bonus is : "<<bonus<<std::endl<<"Salary is : "<<salary<<std::endl<<"Net Salary is : "<<net<<std::endl;
    }
    return 0;
}