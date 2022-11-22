#include <iostream>
using namespace std;

int main (){
	int a = 0, b;
	b = 450;
	cout<<"Nhap so KW tieu thu: ";
	cin>>a;
	
	if ( a >= 101 && a <= 200 ){
		cout<<"Gia tien dien truoc VAT la: "<< (b * 100) + ( a - 99 );
		cout<<"\nGia tien dien sau VAT la: "<< (b * 100) + ( a - 99 ) * 1.1;
	} else if ( a >= 201 && a <= 300 ){
		cout<<"Gia tien dien truoc VAT la: ";
		cout<<"\nGia tien dien sau VAT la: "<<(b * 100) + (a - 99) + ( a - 99 ) * 1.1;		
	} else if ( a >= 301 && a <= 500 ){
		cout<<"Gia tien dien truoc VAT la: ";
		cout<<"\nGia tien dien sau VAT la: "<<(b * 100) + ( a - 99 ) + ( a - 99 ) + ( a - 99 )* 1.1;
	} else if ( a >= 501 && a <= 1000 ){
		cout<<"Gia tien dien truoc VAT la: 1000";	
		cout<<"\nGia tien dien sau VAT la: "<<(b * 100) + ( a - 99 )+( a - 99 )+( a - 99 )+( a - 99 ) * 1.1;
	} else if ( a > 1000 ){
		cout<<"Gia tien dien truoc VAT la: 1200";
		cout<<"\nGia tien dien sau VAT la: "<<(b * 100) + ( a - 99 ) + ( a - 99 ) + ( a - 99 ) + ( a - 99 ) + ( a - 99 ) * 1.1;
	} else {
		cout<<"Gia tien dien truoc VAT la: 450";
		cout<<"\nGia tien dien sau VAT la: "<<(b * 100) * 1.1;
	}
	return 0;
}
