#include <bits/stdc++.h>
using namespace std;

int thuthaptruocthue (int luong, int phucap){
    return luong + phucap;
}
int main (){
    int luong = 0, phucap = 0;
    int thuthaptruocthue;
    thuthaptruocthue = luong + phucap;
    int thuthapchiuthue;
    thuthapchiuthue = thuthaptruocthue - 9000;
    
    float thunhaptruocthue;
    float thuthapthuclinh;
    cout<<"Nhap luong cua ban: ";
    cin>>luong;
    cout<<"Nhap tien phu cap: ";
    cin>>phucap;

    if (thuthapchiuthue <= 5000) {
        thuthapthuclinh = thuthapchiuthue * 0.05;
    }
        else if (thuthapchiuthue >= 5001 && thuthapchiuthue <= 10000){
            thuthapthuclinh = thuthapchiuthue * 0.1;
        }
        else if (thuthapchiuthue >= 10001 && thuthapchiuthue <= 15000){
            thuthapthuclinh = thuthapchiuthue * 0.15;
        }
        else if (thuthapchiuthue >= 15001 && thuthapchiuthue <= 20000){
            thuthapthuclinh = thuthapchiuthue * 0.2;
        }
        else if (thuthapchiuthue > 20000){
            thuthapthuclinh = thuthapchiuthue * 0.25;
        }  
            cout<<"Thu nhap thuc linh cua ban la: "<<thuthapthuclinh;
    return 1;
    }