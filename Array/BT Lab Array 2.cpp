#include <iostream>
using namespace std;

int main () {
	int n;
	
	cout<<"Nhap so phan tu: ";
	cin>>n;

	int a[n];
	for (int i = 0; i < n; i++){
		cout<<"Nhap so: ";
		cin>>a[i];
	}
	
	for (int i = 0; i < n; i++){
		if ( a[i] % 5 == 0) {
			cout<<"\NSo nay chia het cho 5["<<a[i]<<"]";
		}
	}
	
	for (int i = 0; i < n; i++){
		if ( a[i] % 5 == 0) {
			cout<<"\NSo nay chia het cho 5["<<a[i]<<"]";
		}
	}
	return 1;
	}
