#include <iostream>
using namespace std;

int main () {
	int a, b, c, d, e, TuoiTrungBinh;
	cout<<"Nhap tuoi bo: ";
	cin>>a;
	cout<<"Nhap tuoi me: ";
	cin>>b;
	cout<<"Nhap tuoi con 1: ";
	cin>>c;
	cout<<"Nhap tuoi con 2: ";
	cin>>d;
	cout<<"Nhap tuoi con 3: ";
	cin>>e;
	TuoiTrungBinh = (a + b + c + d + e) / 5;
	
	cout<<"Tuoi trung binh cua gia dinh: "<<TuoiTrungBinh;
	
	return 0;
}
