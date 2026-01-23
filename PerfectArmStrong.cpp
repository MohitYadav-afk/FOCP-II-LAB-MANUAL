#include<iostream>
#include<cmath>
int main() {
    int n;
    std::cout<<"Enter the Number : ";
    std::cin>>n;
    //ArmStrong Number
    int ori = n;
    int digit = 0;
    while(n > 0) {
        n /= 10;
        digit++;
    }
    n = ori;
    int arm = 0;
    while(n > 0) {
        int rem = n % 10;
        arm = arm + (int)std::pow(rem,digit);
        n /= 10;
    }
    //Perfect Number
    n = ori;
    int factors = 0;
    for(int i = 1;i < n;i++) {
        if(n % i == 0) {
            factors += i;
        }
    }
    if(factors == n) {
        std::cout<<"Is Perfect Number"<<std::endl;
    }else {
        std::cout<<"Not A Perfect Number"<<std::endl;
    }
    if(arm == n) {
        std::cout<<"Is An ArmStrong Number"<<std::endl;
    }else {
        std::cout<<"Not An ArmStrong Number"<<std::endl;
    }
    return 0;
}