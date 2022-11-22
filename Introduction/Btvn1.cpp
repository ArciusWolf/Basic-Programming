#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e, g, DTB;
	
	cout<<"Nhap diem mieng: ";
	cin>>a;
	cout<<"Nhap diem 15 phut: ";
	cin>>b;
	cout<<"Nhap diem he so 2 1: ";
	cin>>c;
	cout<<"Nhap Diem He So 2 2: ";
	cin>>d;
	cout<<"Nhap diem he so 2 3: ";
	cin>>e;
	cout<<"Nhap diem thi hs3: ";
	cin>>g;
	
	DTB = ( a + b + c * 2 + d * 2 + e * 2 + g * 3 ) / 11;
		
	cout<<"\nDiem trung binh = "<<DTB;
	
	return 0;
}
