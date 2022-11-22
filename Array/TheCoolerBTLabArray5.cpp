#include<iostream>
using namespace std;

int main(){
	int a[100],dem = 0, sum = 0;
	
	 
	for(int i=0;i<100;i++){
		cout<<"\n Nhap so:";
		cin>>a[i];
		if(a[i]==0) break;
		if(a[i] % 2 == 0) {
		dem++; 
		sum += ((a[i])*a[i]);
		}
	}
    cout<<"\n So so chan:"<<dem;
	cout<<"\n Tong chan:"<<sum;
	return 1;
}