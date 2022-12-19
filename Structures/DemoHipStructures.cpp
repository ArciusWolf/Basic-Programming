#include<iostream>
using namespace std;
struct Employee
{
    int id;
    char name[50];
    int age;
    char address[50];
};
    int main(){
        Employee pi;

    cout<<"Nhap ten : ";
    cin.get(pi.name, 50);

    cin.ignore();  
    
    cout<<"Nhap dia chi :";
    cin.get(pi.address, 50);
    cout<<"Nhap tuoi : ";
    cin>>pi.age;
    cout<<"Nhap id : ";
    cin>>pi.id;
    
    cout<<"\nHien thong tin ca nhan : ";
    cout<<"\nHo ten : "<<pi.name;
    cout<<"\nTuoi : "<<pi.age;
    cout<<"\nID : "<<pi.id;
    cout<<"\nDia chi : "<<pi.address;

    return 0;
    }