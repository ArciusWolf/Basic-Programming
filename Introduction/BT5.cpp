#include <iostream>
using namespace std;

int main () {
	int a, b, ChuVi, DienTich;
	cout<<"Nhap chieu dai: ";
	cin>>a;
	cout<<"Nhap chieu rong: ";
	cin>>b;
	ChuVi = (a + b) * 2;
	DienTich = a * b;
	
	
	cout<<"Chu vi hinh chu nhat: "<<ChuVi;
	cout<<"\nDien tich hinh chu nhat: "<<DienTich;
	
	return 0;
}
