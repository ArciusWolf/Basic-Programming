#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int numMinus(int a, int b){
    return a - b;
}

int divine(int a, int b){
    return a / b;
}

int multiple(int a, int b){
    return a * b;
}

int main(){
    int a, b,Luachon;
    cout<<"Nhap so 1st: ";
    cin>>a;
    cout<<"Nhap so 2nd: ";
    cin>>b;
    int Tong = sum (a, b);
    cout<<"Ket qua la: "<<Tong;
    int Hieu = numMinus (a, b);
    cout<<"\nKet qua la: "<<Hieu;
    int Chia = divine (a, b);
    cout<<"\nKet qua la: "<<Chia;
    int Nhan = multiple (a, b);
    cout<<"\nKet qua la: "<<Nhan;
    return 0;
}
