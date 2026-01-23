#include<iostream>
#include<cmath>
double squareRoot(double n,double ans) {
    double s = 0;
    double e = n;
    while(e - s > 1e-6) { //1e-6 is : 0.000001
        double m = s + (e - s) / 2;
        if(m * m == n) {//this wont work for floating points
            ans = (double)m;
            return ans;
        }else if (m * m > n) {
            e = m;
        }else {
            s = m;
        }
    }
    return s;
}
double countTimes(double n,double ans) {//No need of this
    for(int i = 0;i < 3;i++) {
        if(i == 0) {
            ans = squareRoot(n,ans);
        }else {
            double a = std::pow(10,i);
            n = n + (1/a);
            ans = squareRoot(n,ans);
        }
    }
    return ans;
}
int main() {
    double num;
    std::cout<<"Enter the number : ";
    std::cin>>num;
    double ans = squareRoot(num,0);
    std::cout<<"Square root is : "<<ans;
}