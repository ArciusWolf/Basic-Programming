#include <iostream>
using namespace std;

int main () {
	int money;
	
	cout<<"Tien luong: ";
	cin>>money;
	
	if (money >= 500) {
		cout<<"Ban phai tra them thue, Luong cua ban la: "<<(money - 20);
	}
	else {
		cout<<"Ban khong can tra thue luong cua ban la: "<<money;
	}
	return 0;
}
