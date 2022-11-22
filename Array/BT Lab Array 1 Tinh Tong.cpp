#include <iostream>
using namespace std;

int main() {
	int a[10], tong = 0, Tong3 = 0;
	
	for (int i=0; i<10; i++){
		cout<<"Moi ban nhap so: ";
		cin>>a[i];
		tong += a[i];
	}
		cout<<"\nTong = "<<tong;
		
	for (int i=0; i<10; i++){
			if ( a[i] % 3 == 0){
				cout<<"\nSo nay chia het cho 3![ "<<a[i]<<" ]";
				Tong3 += a[i];
			}
	}
		cout<<"\nTong so chia het cho 3: "<<Tong3;
	
	for (int i=0; i<10; i++){
			if ( a[i] % 2 == 0){
				cout<<"\nSo chan ["<<a[i]<<"]";
			}
	}

	return 1;
}
