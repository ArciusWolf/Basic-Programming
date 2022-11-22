#include <iostream>
using namespace std; 

int main() {
	float r, d, Pi, ChuVi, DienTich;
	Pi = 3.14;
	
	cout<<"Nhap ban kinh duong tron: ";
	cin>>r;
	cout<<"Nhap duong kinh duong tron: ";
	cin>>d;
	
	ChuVi = d * Pi;
	DienTich = r * r * Pi;
	
	cout<<"Chu Vi hinh tron: "<<ChuVi;
	cout<<"\nDien tich hinh tron: "<<DienTich;
	
	return 0;
}
