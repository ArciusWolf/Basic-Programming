#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Nhap diem cua ban: ";
	cin>>a;
	if ( a >= 8 && a <= 10 ){
		cout<<"Ban dc thuong chuyen du lich!";
	}
	else {
		cout<<"Ban k dc thuong chuyen du lich";
	}
	return 0;
}
