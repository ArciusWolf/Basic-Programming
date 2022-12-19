#include <iostream>
using namespace std;

//dinh nghia struct
struct NhanVien {
	int ma;
	char hoten[50];
	int tuoi;
	int luong;
	char diachi[100];
};

int main()
{
	NhanVien danhsachnv[3];
	int tongtuoi = 0;
	
	//nhap du lieu cho mang nhan vien
	for(int i = 0; i < 3; i++) {
		cout<<"\nMoi ban nhap ma:";
		cin>>danhsachnv[i].ma;
		cin.ignore();
		cout<<"\nMoi ban nhap ho ten:";
		cin.get(danhsachnv[i].hoten,  50);
		cout<<"\nMoi ban nhap tuoi:";
		cin>>danhsachnv[i].tuoi;
		cout<<"\nMoi ban nhap luong:";
		cin>>danhsachnv[i].luong;
		cin.ignore();
		cout<<"\nMoi ban nhap dia chi:";
		cin.get(danhsachnv[i].diachi,  50);
	}
	
	//in ra noi dung cua mang
	for(int i = 0; i < 3; i++) {
		cout<<"\n Ma nhan vien: "<<danhsachnv[i].ma;
		cout<<"\n Ho ten nhan vien: "<<danhsachnv[i].hoten;
		cout<<"\n Tuoi nhan vien: "<<danhsachnv[i].tuoi;
		cout<<"\n Luong nhan vien: "<<danhsachnv[i].luong;
		cout<<"\n Dia chi nhan vien: "<<danhsachnv[i].diachi;
		
		tongtuoi = tongtuoi + danhsachnv[i].tuoi;
	}
	
	cout<<"\n\nTong tuoi cua cac nhan vien la: "<<tongtuoi;

    return 0;
}