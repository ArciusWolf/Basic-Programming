#include<iostream>
using namespace std;

int main() {
	int tong = 0, i = 11;

	do {
		cout<<"\ni = "<<i;
		tong = tong + i;
		i++;
	} while(i <= 10);

	cout<<"\nTong = "<<tong;
	
	return 1;
}
