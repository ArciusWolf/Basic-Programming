#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct NhanVien {
  int ma; 
  char hoten[50];
  float hesoluong;
  int songaycong;
  char diachi[100]; 
};

int main (){
    int mnv;
    NhanVien DSnhanvien[2];
    for (int i=0; i<2; i++){
        cout<<"Nhap thong tin nhan vien thu "<<i+1<<": ";
        cout<<"\nNhap ma nhan vien: ";
        cin>>DSnhanvien[i].ma;
        cin.ignore();
        cout<<"Nhap ho ten nhan vien: ";
        cin.get(DSnhanvien[i].hoten, 50);
        cout<<"Nhap he so luong nhan vien: ";
        cin>>DSnhanvien[i].hesoluong;
        cout<<"Nhap so ngay cong cua nhan vien: ";
        cin>>DSnhanvien[i].songaycong;
        cin.ignore();
        cout<<"Nhap dia chi nhan vien: ";
        cin.get(DSnhanvien[i].diachi, 100);
    }

    cout<<"Ma"<<"\t"<<"Ho ten"<<"\t"<<"He so luong"<<"\t"<<"So ngay cong"<<"\t"<<"Dia chi";
    for (int i=0; i<2; i++) {    
    cout<<"\n"<<DSnhanvien[i].ma<<"\t"<<"-"<<"\t"<<DSnhanvien[i].hoten<<"\t\t"<<DSnhanvien[i].hesoluong<<"\t"<<DSnhanvien[i].songaycong<<"\t"<<DSnhanvien[i].diachi;
    }
    int i=0;
    cout<<"\nNhap ma nhan vien can tim kiem: ";
    cin>>i;
    cout<<"\n"<<DSnhanvien[i].ma<<"\t"<<"-"<<"\t"<<DSnhanvien[i].hoten<<"\t\t"<<DSnhanvien[i].hesoluong<<"\t"<<DSnhanvien[i].songaycong<<"\t"<<DSnhanvien[i].diachi;
    return 0;
    }