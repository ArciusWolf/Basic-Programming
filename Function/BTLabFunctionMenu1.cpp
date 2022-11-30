#include <iostream>
#include <cmath>
using namespace std;

float hinhTron(float R){
    return R*R*3.14;
}
int ChuNhat(int a, int b){
    return a*b;
}
int TamGiac(int a, int h){
    return (a*h)/2;
}
int Vuong(int a){
    return a*a;
}
float Thoi(float d1, float d2){
    return 0.5*(d1*d2);
}
int BinhHanh(int a, int H){
    return a*H;
}
int main(){
    int Luachon = 0;
    do {
    cout<<"\n1. Tinh dien tich hinh tron.";
    cout<<"\n2. Tinh dien tich hinh chu nhat.";
    cout<<"\n3. Tinh dien tich hinh tam giac.";
    cout<<"\n4. Tinh dien tich hinh vuong.";
    cout<<"\n5. Tinh dien tich hinh thoi.";
    cout<<"\n6. Tinh dien tich hinh binh hanh.";
    cout<<"\n7. Ket thuc.";
    cout<<"\n\nNhap lua chon cua ban: ";
    cin>>Luachon;
    switch (Luachon)
    {
    case 1: {
    float R;
        cout<<"-------Dien tich hinh tron-------";
        cout<<"\nNhap ban kinh hinh tron: ";
        cin>>R;
        float HinhTron = hinhTron(R);
        cout<<"Dien tich hinh tron la: "<<HinhTron;
        break;
    }
    case 2: {
        int a, b;
        cout<<"-------Dien tich hinh chu nhat-------";
        cout<<"\nNhap chieu dai: ";
        cin>>a;
        cout<<"Nhap chieu rong: ";
        cin>>b;
        int DienTich = ChuNhat(a,b);
        cout<<"Dien tich hinh chu nhat la: "<<DienTich;
        break;
    }
    case 3: {
        int a, h;
        cout<<"-------Dien tich hinh tam giac-------";
        cout<<"\nNhap do dai day: ";
        cin>>a;
        cout<<"\nNhap chieu cao: ";
        cin>>h;
        int DienTichTG = TamGiac(a,h);
        cout<<"Dien tich hinh tam giac la: "<<DienTichTG;
        break;
    }
    case 4: {
        int a;
        cout<<"-------Dien tich hinh vuong-------";
        cout<<"\nNhap chieu dai canh: ";
        cin>>a;
        int DienTichV = Vuong(a);
        cout<<"Dien tich hinh vuong la: "<<DienTichV;
        break;
    }
    case 5: {
        float d1, d2;
        cout<<"-------Dien tich hinh thoi-------";
        cout<<"\nNhap do dai duong cheo thu nhat: ";
        cin>>d1;
        cout<<"Nhap do dai duong cheo thu 2: ";
        cin>>d2;
        float DienTichT = Thoi(d1,d2);
        cout<<"Dien tich hinh thoi la: "<<DienTichT;
        break;
    }
    case 6: {
        int a, H;
        cout<<"-------Dien tich hinh binh hanh-------";
        cout<<"\nNhap chieu dai day: ";
        cin>>a;
        cout<<"Nhap chieu cao: ";
        cin>>H;
        int DienTichBH = BinhHanh(a,H);
        cout<<"Dien tich hinh binh hanh la: "<<DienTichBH;
        break;
    }
    case 7: {
        cout<<"Ket thuc chuong trinh!";
        return 0;
    }
    default: {
        cout<<"Khong hop le!";
        break;
    }
    }
} while ( Luachon != 8 );
    return 0;
    }