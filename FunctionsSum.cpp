#include<iostream>
int intSum(int a, int b) {
    return a + b;
}
float floatSum(float a, float b) {
    return a + b;
}
double doubleSum(double a, double b) {
    return a + b;
}
int main() {
    int a,b;
    std::cout<<"Enter the Integer No 1 and No 2 : ";
    std::cin>>a>>b;
    std::cout<<intSum(a,b)<<std::endl;
    float c,d;
    std::cout<<"Enter the Float No 1 and No 2 : ";
    std::cin>>c>>d;
    std::cout<<floatSum(c,d)<<std::endl;
    double e,f;
    std::cout<<"Enter the Double No 1 and No 2 : ";
    std::cin>>e>>f;
    std::cout<<doubleSum(e,f)<<std::endl;
    return 0;
}