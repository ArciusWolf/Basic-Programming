#include <iostream>
using namespace std;

int main() {
	int luachon = 0;
	
do {
		cout<<"\n\n1/ Tinh chu vi va dien tich hinh thang.";
		cout<<"\n2/ Tinh chu vi va dien tich hinh binh hanh.";
		cout<<"\n3/ Tinh chu vi va dien tich hinh thoi.";
		cout<<"\n4/ Tinh chu vi va dien tich hinh tru	.";
		cout<<"\n5/ Tinh chu vi va dien tich hinh non.";
		cout<<"\n6/ Thoat chuong trinh.";
	
	cout<<"Moi ban nhap chuong trinh ban muon: ";
	cin>>luachon;
	
	switch (luachon) {
		case 1: {
			int canhday1, canhday2, canhben1, canhben2, chieucao, chuvi, dientich;
			cout<<"\n----Chu vi, dien tich hinh thang----";
			cout<<"\nNhap chieu dai 2 canh day cua hinh thang: ";
			cin>>canhday1;
			cout<<"\nNhap chieu dai 2 canh day cua hinh thang: ";
			cin>>canhday2;
			cout<<"\nNhap chieu dai 2 canh ben cua hinh thang: ";
			cin>>canhben1>>canhben2;
			cout<<"\nNhap chieu cao hinh thang: ";
			cin>>chieucao;
			chuvi = canhday1 + canhday2 + canhben1 + canhben2;
			dientich = (canhday1 + canhday2)/2 * chieucao;
			
			cout<<"\nChu vi hinh thang la: "<<chuvi<<"\nDien tich hinh thang la: "<<dientich;
			break;
		}
		case 2: {
			cout<<"\n----Chu vi, dien tich hinh binh hanh----";
			break;
		}
		case 3: {
			cout<<"\n----Chu vi, dien tich hinh thoi----";
			break;
		}
		case 4: {
			cout<<"\n----Chu vi, dien tich hinh tru----";
			break;
		}
		case 5: {
			cout<<"\n----Chu vi, dien tich hinh non----";
			break;
		}
		default:
			break;
	}
} while (luachon != 6);
}
