#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int Choose = 0,j,temp;
    int i, n=0;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    int a[n];
    cout<<"\nBan da khai bao mang thanh cong!, khoi chay menu...";
    
    do {

        cout<<"\n------------------------------------------------------------";
        cout<<"\n| 1, Nhap mang.                                            |";
        cout<<"\n| 2, In mang.                                              |";
        cout<<"\n| 3, Sap xep mang theo thu tu giam dan.                    |";
        cout<<"\n| 4, Dem va in ra tong so luong cac so chan trong mang.    |";
        cout<<"\n| 5, Tim phan tu lon nhat, nho nhat cua mang.              |";
        cout<<"\n| 6, In ra phan tu tong gia tri cua cac phan tu trong mang.|";
        cout<<"\n| 7, Kiem tra tinh doi xung cua mang.                      |";
        cout<<"\n| 8, Dem so phan tu chia het cho 3 trong mang.             |";
        cout<<"\n| 9, Tinh trung binh cong cac phan tu trong mang.          |";
        cout<<"\n| 10, Thoat chuong trinh.                                  |";
        cout<<"\n------------------------------------------------------------";
        cout<<"\nHay nhap gia tri tu ban phim: ";
        cin>>Choose;
        switch (Choose){
            case 1:{
                while (i<n){
                    i++;
                    cout<<"Nhap phan tu thu "<<i<<" : ";
                    cin>>a[i-1];
                }
                break;
            }
            case 2:{
                while (i<n){
                    i++;
                    cout<<"Nhap phan tu thu "<<i<<" : ";
                    cin>>a[i-1];
                }
                cout<<"\nMang da nhap: ";
                for (i=0; i<n; i++){
                cout<<a[i];
                }
                break;
            }
            case 3:{
                cout<<"Sap xep mang theo thu tu giam dan: ";
                int i, j, temp;
                for (i=0; i<(n-1); i++){
                    for (j=i+1; j<n; j++){
                        if(a[j]>a[i]){
                            temp = a[j];
                            a[j] = a[i];
                            a[i] = temp;
                        }
                    }
                }
                for (i=0; i<n; i++){
                    cout<<a[i];
                }
                break;
            }
            case 4:{
                int count = 0, tong;
                cout<<"Dem va in ra tong so luong cac so chan trong mang:";
                for (i=0; i<n; i++)
                if (a[i] % 2 == 0){
                    count++;
                    tong += a[i];
                  
                }
            cout<<"So luong so chan co trong mang: "<<count;
                break;
            }
            case 5:{
                cout<<"Tim phan tu lon nhat, nho nhat cua mang";
                int i, j, temp;
                for (i=0; i<(n-1); i++){
                    for (j=i+1; j<n; j++){
                        if(a[j]>a[i]){
                            temp = a[j];
                            a[j] = a[i];
                            a[i] = temp;
                        }
                    }
                }
                cout<<"\nPhan tu nho nhat la: "<<a[i];

                                for (i=0; i<(n-1); i++){
                    for (j=i+1; j<n; j++){
                        if(a[j]<a[i]){
                            temp = a[j];
                            a[j] = a[i];
                            a[i] = temp;
                        }
                    }
                }
                cout<<"\nPhan tu lon nhat la: "<<a[i];
                break;
            }
            case 6:{
                int tong = 0;
                for (int i=0; i<n; i++){       
                tong += a[i];
                }
                cout<<"Tong gia tri cac phan tu trong mang: "<<tong;
                break;
            }
            case 7:{
                int doixung = 0, i, j;
                cout<<"Kiem tra tinh doi xung cua mang";
                break;
            }
            case 8:{
                int count = 0;
                for (i=0; i<n; i++)
                if (a[i] % 3 == 0){
                count++;
                } 
                cout<<"So phan tu chia het cho 3 la: "<<count;
                break;
            }
            case 9:{
                float tbc = 0, tong = 0;
                for (i=0; i<n; i++){
                    tong += a[i];
                    tbc = tong / n;
                }
                cout<<"Trung binh cong cac phan tu trong mang: "<<tbc;
                break;
            }
            default: {
                cout<<"Invalid number!";
                break;
            }
        }
    } while (Choose != 10);
    return 0;
}