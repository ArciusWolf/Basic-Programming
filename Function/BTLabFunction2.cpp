#include <iostream>
#include <cmath>
using namespace std;

int arearectangle(int a, int b){
    return a * b;
}

int square(int x){
    return x * x;
}
double factorial(int x)
{
    if (x == 1)
    return 1;
    return x * factorial(x - 1);
}
int main(){
    int a,b,x;
    cout<<"Nhap so 1st: ";
    cin>>a;
    cout<<"Nhap so 2nd: ";
    cin>>b;
    cout<<"Nhap x: ";
    cin>>x;
    int DienTich = arearectangle(a,b);
    cout<<"\nDien tich hinh chu nhat la: "<<DienTich;
    int BinhPhuong = square(x);
    cout<<"\nBinh phuong x la: "<<BinhPhuong;
    double Giaithua = factorial(x);
    cout<<"\nGiai thua cua x la: "<<Giaithua;

return 0;
}