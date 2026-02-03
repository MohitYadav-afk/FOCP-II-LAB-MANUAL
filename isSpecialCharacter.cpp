#include<iostream>
#include<string>
//intution --> check if it contains digits uppercase lowercase and return their not.
bool isSpecial(std::string str) {
    int n = str.length();
    int flag = 0;
    for(int i = 0;i < n;i++) {
        char ch = str.at(i);
        if(!(ch >= '0' && ch <= '9') && !(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z')) {
            flag = 1;
        }
    }
    return (flag == 1);
}
int main() {
    std::string str;
    std::cout<<"Enter the String : ";
    getline(std::cin,str);

    if(isSpecial(str)) {
        std::cout<<"Contains Special Character";
    }else {
        std::cout<<"Doesn't Contains Special Character";
    }
    return 0;
}