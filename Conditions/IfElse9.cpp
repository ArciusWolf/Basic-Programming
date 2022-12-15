#include <bits/stdc++.h>
using namespace std;

int main(){
    float dtb;
    float baikiemtra, diemgiuaki, diemcuoiki;

    cout<<"Nhap diem bai kiem tra: ";
    cin>>baikiemtra;
    cout<<"Nhap diem giua ki: ";
    cin>>diemgiuaki;
    cout<<"Nhap diem cuoi ki: ";
    cin>>diemcuoiki;

    dtb = (baikiemtra * 0.2) + (diemgiuaki * 0.3) + (diemcuoiki * 0.5);

    if (dtb >= 9.0)
    {
        cout<<"Ban xep loai A!";
    }
    else if (dtb >= 7.0 && dtb < 9.0)
    {
        cout<<"Ban xep loai B";
    } else if (dtb >= 6.0 && dtb < 7.0)
    {
        cout<<"Ban xep loai C";
    } else if (dtb >= 5.0 && dtb < 6.0)
    {
        cout<<"Ban xep loai D";
    } else if (dtb < 5.0)
    {
        cout<<"Ban xep loai F";
    }

    return 0;
}