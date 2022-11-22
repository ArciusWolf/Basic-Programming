#include <iostream>
using namespace std;

int main () {
	int a;
	long giaithua = 1;
	cout<<"Nhap so nguyen: ";
	cin>>a;
	
	for (int i = 1; i <=a; ++i) {
		giaithua = giaithua *i;
	}
	cout<<"Giai thua cua "<< a << " la: "<<giaithua;
	
	return 0;
}
