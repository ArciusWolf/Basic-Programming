#include <iostream>
using namespace std;

int main() {
	//Khai bao
	int i=1, n=0, a[100],tong=0;
	//Nhap so va khai bao so chan
	for (int i=1; i<100; i++){
		cout<<"Nhap so: ";
		cin>>i;
	if (i % 2 == 0){
		n++;
	}	
	if (i == 0){
		break;
	}
}
	cout<<"So chan: "<<n;

	tong += a[n] * a[n];
	cout<<"\nTong binh phuong cac so chan: "<<tong;

	return 1;
}