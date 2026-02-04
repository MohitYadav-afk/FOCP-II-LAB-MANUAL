#include <iostream>
using namespace std;
int main() {
	int l;
	int r;
	int k;
	int count = 0;
	cin>>l>>r>>k;
	for(int i = l;i <= r;i++) {
		if(i % k == 0) count++;
	}
	cout<<count;
	return 0;
}
