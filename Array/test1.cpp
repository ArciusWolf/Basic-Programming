#include <iostream>
using namespace std;

int main(){
    int i, j, temp;
    int n=0;
    cout<<"Nhap vao so luong so can nhap <toi da 100>: ";
    cin>>n;
    int k[n];
    while (i<n){
        if (n > 100)
    {
        cout<<"So luong so can nhap vuot qua 100!";
        return 1;
    }
        i++;
        cout<<"k["<<i<<"]= ";
        cin>>k[i-1];
    }
    cout<<"\nSo chan co trong mang: ";
    for (j=0; j<n; j++){
        if (k[j] % 2 == 0){
            cout<<k[j]<<" ";
            j++;
        }
    }
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (k[i] < k[j]){
                temp = k[j];
                k[j] = k[i];
                k[i] = temp;
            }
        }
    }
    
    cout<<"\nMang cua ban duoc sap xep giam dan nhu sau: ";
    cout<<"\nk["<<i+1<<"]= ";
    for (i=0; i<n; i++){
        cout<<"\t"<<k[i]<<"\t";
    }
    return 1;
}