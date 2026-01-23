#include<iostream>
void print(int n) {
    for(int i = 0;i < n;i++) {
        for(int j = n;j > i ;j--) {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}
int main() {
    int n;
    std::cout<<"Enter the Lenght of Traingle : ";
    std::cin>>n;
    for(int i = 1; i <= n;i++) {
        for(int j = 1;j <= n - i + 1;j++) {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    print(n);
    return 0;
}