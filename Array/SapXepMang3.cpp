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
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (k[i] < k[j]){
                temp = k[j];
                k[j] = k[i];
                k[i] = temp;
            }
        }
    }
    cout<<"\nMang cua ban duoc sap xep giam dan nhu sau: \t";
    for (i=0; i<n; i++){
        cout<<k[i]<<"\t";
    }
    return 1;
}