#include<iostream>
int main() {
    std::cout<<"Enter C for Celcius into farenhite and F for vice versa";
    char ch;
    float c;
    float f;
    float fer;
    float cel;
    std::cin>>ch;
    switch(ch) {
        case 'c':
        case 'C':
        std::cout<<"Enter value of celcius";
         std::cin>>c;
        fer = (c * (9/5)) + 32;
         std::cout<<"The Value in Farenhite is : "<<fer;
         break; 

        case 'f':
        case 'F':
        std::cout<<"Enter value of farenhite";
        std::cin>>f;
        cel = (f-32)*(5/9);
         std::cout<<"The Value in celcius is : "<<cel;
         break;

         default :
         std::cout<<"Invalid choice";
    }
    return 0;
}