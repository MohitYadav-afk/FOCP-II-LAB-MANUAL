#include<iostream>
int Result(int a,int b,int c = 0,int d = 0,int e = 0) {
    return a + b + c + d + e;
}
// int Result(int a, int b, int c ,int d) {
//     return a + b + c + d;
// }
// int Result(int a, int b) {
//     return a + b;
// }
// int Result(int a, int b ,int c) {
//     return a + b + c;
// }
int main() {
    std::cout<<Result(47,69,84,56,75)<<std::endl;
    std::cout<<Result(78,49,65,77)<<std::endl;
    std::cout<<Result(45,58)<<std::endl;
    std::cout<<Result(57,68,95)<<std::endl;
    return 0;
}