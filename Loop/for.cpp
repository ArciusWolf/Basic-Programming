#include <iostream>
using namespace std;

int main () {
	int tong = 0, tbc;
	
	for(int i=1 ;i <= 100; ++i) {
		tong = tong + i;
		tbc = (tong + i) / 100;
	}
	cout<<"Tong i ="<<tong;
	cout<<"\ntbc i = "<<tbc;
	
	return 0;
}
