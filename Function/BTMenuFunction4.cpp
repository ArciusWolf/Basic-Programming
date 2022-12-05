#include <bits/stdc++.h>
using namespace std;

int ChuViHT (int a, int b, int c, int d){
    return a+b+c+d;
}
int DienTichHT (int a, int b, int h){
    return (a+b)/2*h;
}
int ChuViHBH (int a, int b){
    return (a+b)*2;
}
int DienTichHBH (int a, int h){
    return a*h;
}
int ChuViT (int a){
    return a*4;
}
float DienTichT (float d1, float d2){
    return (d2+d1)*0.5;
}
float ChuViTru (float r){
    return 2*3.14*r;
}
float DienTichTru (float r, float h){
    return 2*3.14*r*h;
}
int ChuViN (int a, int b){
    return (a+b)*2;
}
int DienTichN (int r, int l){
    return 3.14*r*l;
}

int main(){
    int luachon = 0;
    do {
        cout<<"\n1. Tinh chu vi va dien tich hinh thang : ";
        cout<<"\n2. Tinh chu vi va dien tich hinh binh hanh : ";
        cout<<"\n3. Tinh chu vi va dien tich hinh thoi : ";
        cout<<"\n4. Tinh chu vi va dien tich hinh tru : ";
        cout<<"\n5. Tinh chu vi va dien tich hinh non : ";
        cout<<"\n6. Ket thuc.";
        cout<<"\nMoi ban nhap lua chon : ";
        cin>>luachon;
        switch (luachon){
            case 1: {
                int a, b,c,d;
                cout<<"\nChu vi va dien tich hinh thang";
                cin>>a>>b>>c>>d;
                int kq = ChuViHT(a,b,c,d);
                cout<<"Chu vi hinh thang la: "<<kq;
                break;
            }
            case 2: {
                cout<<"\nChu vi va dien tich hinh binh hanh";
                break;
            }
            case 3: {
                cout<<"\nChu vi va dien tich hinh thoi";
                break;
            }
            case 4: {
                cout<<"\nChu vi va dien tich hinh tru";
                break;
            }
            case 5: {
                cout<<"\nChu vi va dien tich hinh non";
                break;
            }
        }
    } while (luachon != 7);
    return 1;
}
