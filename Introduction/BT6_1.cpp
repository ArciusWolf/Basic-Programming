#include <iostream>
using namespace std;

int main () {
	int a, b, c, h, ChuVi, DienTich;
	cout<<"Nhap chieu cao: ";
	cin>>h;
	cout<<"Nhap chieu dai day: ";
	cin>>a;
	cout<<"Nhap do dai canh 1: ";
	cin>>b;
	cout<<"Nhap do dai canh 2: ";
	cin>>c;
	DienTich = (a * h ) / 2;
	ChuVi = a + b + c;
	
	cout<<"\nChu vi: "<<ChuVi;
	cout<<"\nDien tich: "<<DienTich;
		
	return 0;
}
