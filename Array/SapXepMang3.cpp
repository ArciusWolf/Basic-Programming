#include <iostream>
using namespace std;

int main(){
    int i, j, temp;
    int n=0;
    cout<<"Nhap vao cac so nguyen: ";
    cin>>n;
    int k[100];
    while (i<n){
        i++;
        cout<<"k["<<i<<"]= ";
        cin>>k[i-1];
    }
    for (i=0; i<99; i++){
        for (j=i+1; j<100; j++){
            if (k[i] < k[j]){
                temp = k[j];
                k[j] = k[i];
                k[i] = temp;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
    cout<<"Mang cua ban duoc sap xep giam dan nhu sau: \t"<<k[i];
    }
    return 1;
}