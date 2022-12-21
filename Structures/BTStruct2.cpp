#include <bits/stdc++.h>
using namespace std;

struct Diem{
    int MaSo;
    char HoTen[30];
    float monToan, monVatLi, monHoaHoc;
    float dtb;
};

int main (){
    Diem ThiSinh[5];
    for (int i=0; i<5; i++){
        cout<<"\nNhap thong tin cua thi sinh thu "<<i+1<<":";
        cout<<"\nNhap ma so thi sinh: ";
        cin>>ThiSinh[i].MaSo;
        cin.ignore();
        cout<<"Nhap ho ten thi sinh: ";
        cin.get(ThiSinh[i].HoTen, 30);
        cout<<"Nhap diem toan: ";
        cin>>ThiSinh[i].monToan;
        cout<<"Nhap diem Vat Li: ";
        cin>>ThiSinh[i].monVatLi;
        cout<<"Nhap diem mon hoa hoc: ";
        cin>>ThiSinh[i].monHoaHoc;
    }

    int id = 0, search = 0, index = 0;
    float dtb;
    cout<<"\nNhap ma so thi sinh can tim: ";
    cin>>id;
    for (int i=0; i<5; i++){
        if (ThiSinh[i].MaSo == id){
            search = 1;
            index = i;
            
            break;
        }
    }

    if (search == 1){
        dtb =(ThiSinh[index].monToan + ThiSinh[index].monVatLi + ThiSinh[index].monHoaHoc) / 3;
        cout<<"----------------------";
        cout<<"\n"<<"- Ma so: "<<ThiSinh[index].MaSo;
        cout<<"\n"<<"- Ho ten: "<<ThiSinh[index].HoTen;
        cout<<"\n"<<"- Diem toan: "<<ThiSinh[index].monToan;
        cout<<"\n"<<"- Diem vat li: "<<ThiSinh[index].monVatLi;
        cout<<"\n"<<"- Diem hoa hoc: "<<ThiSinh[index].monHoaHoc;
        cout<<"\n"<<"- Diem trung binh cua thi sinh: "<<dtb;
        cout<<"\n----------------------";
    }
    else {
        cout<<"Khong tim thay ma so!";
    };

    Diem temp;
    for (int i = 0; i<4; i++){
        for (int j=i; j<5; j++){
            if (ThiSinh[j].dtb > ThiSinh[i].dtb){
                temp = ThiSinh[j];
                ThiSinh[j] = ThiSinh[i];
                ThiSinh[i] = temp;
            }
        }
        cout<<"\n- Danh sach thi sinh diem tang dan la: ";
        for (int i=0; i<5; i++){
            cout<<"\n"<<ThiSinh[i].HoTen;
        }
    }
}