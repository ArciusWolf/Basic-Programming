#include <iostream>
using namespace std;

int main () {
	int luachon = 0;
	
	do {
	
	cout<<"\n\n1/ Tinh chu vi va dien tich hinh tron.";
	cout<<"\n\n2/ Tinh chu vi va dien tich hinh chu nhat.";
	cout<<"\n\n3/ Tinh chu vi va dien tich hinh tam giac.";
	cout<<"\n\n4/ Tinh chu vi va dien tich hinh vuong.";
	cout<<"\n\n5/ Tinh chu vi va dien tich hinh thang can.";
	cout<<"\n\n6/ Thoat.";
	
	cout<<"\nMoi ban nhap lua chon: ";
	cin>>luachon;
	switch (luachon) {
		case 1: {
			
			cout<<"Chu vi, dien tich hinh tron";
			break;
		case 2:
			cout<<"Chu vi, dien tich hinh chu nhat";
			break;
		case 3:
			cout<<"Chu vi, dien tich hinh tam giac";
			break;
		case 4:
			int canh, chuvi, dientich;
			cout<<"Chu vi, dien tich hinh vuong";
			cout<<"\nMoi ban nhap canh hinh vuong: ";
			cin>>canh;
			chuvi = canh * 4;
			dientich = canh * canh;
			cout<<"Chu vi hinh vuong la: "<<chuvi<<"\nDien tich hinh vuong la: "<<dientich;
			break;
		case 5:
			cout<<"Chu vi, dien tich hinh thang can";
			break;
		default:
			cout<<"Invalid!";
			break;
		}
	}
} while ( luachon != 6);
	return 1;
}
