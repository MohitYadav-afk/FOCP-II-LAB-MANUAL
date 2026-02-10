#include <iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int i = 0;
	int j = str.length() - 1;
	while(i < j) {
		if(str.at(i) == str.at(j)) {
			i++;
			j--;
		}else {
			break;
		}
	}
	if(i >= j) {
		cout<<"YES";
	}else {
		cout<<"NO";
	}
	return 0;
}
