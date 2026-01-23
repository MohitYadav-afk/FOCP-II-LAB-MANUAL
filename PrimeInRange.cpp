#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the Number : ";
    std::cin>>n;
    bool* arr = new bool[n + 1]; //new bool[n]() if we dont add these then it wont take the default value 
    arr[0] = false;
    arr[1] = false;
    for(int i = 2;i < n;i++) {
        arr[i] = true;
    }
    for(int i = 2;i*i <= n;i++) {
        if(arr[i] == true) {
            for(int j = i*i;j < n;j += i) {
                arr[j] = false;
            }
        }
    }
    std::cout<<"Prime Numbers in Range are : ";
    for(int i = 0;i < n;i++) {
        if(arr[i] == true) {
            std::cout<<i<<" ";
        }
    }
    return 0;
}