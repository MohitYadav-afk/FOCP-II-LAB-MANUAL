#include<iostream>
#include<string>
// void welcome() {
//     std::cout<<"Welcome Mohit";
// }
// void welcome(std::string name) {
//     std::cout<<"Welcome "<<name;
// }
// int main() {
//     welcome();
//     std::cout<<std::endl;
//     std::string name;
//     getline(std::cin,name);
//     welcome(name);
//     return 0;
// }
void welcome(std::string firstName= "yuhooo",std::string lastName = "") {
    std::cout<<firstName<<lastName<<std::endl;
}
int main() {
    welcome();
    welcome("mohit");
    welcome("mohit","yadav");
    return 0;
}