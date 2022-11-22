#include <iostream>
using namespace std;

int main () {
	int tong = 0, i = 1;
	while (i <= 100){
		cout<<"\ni = "<<i;
		tong = tong + i;
		++i;
	}
	cout<<"Tong i la: "<<tong;
	return 0;
}
