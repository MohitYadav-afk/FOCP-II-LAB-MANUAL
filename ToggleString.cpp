#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int n = s.length();
	for(int i = 0;i < n;i++) {
		if(s.at(i) > 64 && s.at(i) < 97) {
			s.at(i) = s.at(i) + 32;
		}else if(s.at(i) > 96 && s.at(i) < 130) {
			s.at(i) = s.at(i) - 32;
		}
	}
	cout<<s;
	return 0;
}
