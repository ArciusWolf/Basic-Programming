#include <iostream>
using namespace std;

int main() {
	int dtk = 0;
	cout<<"Nhap diem tong ket: ";
	cin>>dtk;
	
	if ( dtk > 80 &&  dtk <= 100 ){
		cout<<"Ban xep loai gioi!";
	} else if ( dtk >= 70 && dtk <= 79 ) {
		cout<<"Ban xep loai kha!";
	} else if ( dtk >= 60 && dtk <= 69 ) {
		cout<<"Ban xep loai TB kha!";
	} else if ( dtk >= 50 &&  dtk <= 59 ) {
		cout<<"Ban xep loai TB ";
	} else if ( dtk < 50 ) {
		cout<<"Ban xep loai yeu";
	} else {
		cout<<"K hop le!";
	}
	return 0;
		
}
