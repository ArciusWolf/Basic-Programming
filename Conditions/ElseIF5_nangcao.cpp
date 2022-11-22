#include<iostream>
using namespace std;

int main() {
	int kw = 0, tientruocthue = 0;
	float tienthue = 0, tiensauthue = 0;
	
	cout<<"Moi ban nhap so kw:";
	cin>>kw;
	
	if(kw <= 100) {
		tientruocthue = kw * 450;
	} else if (kw > 100 && kw <= 200) {
		tientruocthue = 100*450 + (kw - 100)*600;
	} else if (kw > 200 && kw <= 300) {
		tientruocthue = 100*450 + 100*600 + (kw-200)*750;
	} else if (kw > 300 && kw <= 500) {
		tientruocthue = 100*450 + 100*600 + 100*750 + (kw-300)*900;
	} else if (kw > 500 && kw <= 1000) {
		tientruocthue = 100*450 + 100*600 + 100*750 + 200*900 + (kw-500)*1000;
	} else if (kw > 1000) {
		tientruocthue = 100*450 + 100*600 + 100*750 + 200*900 + 500*1000 + (kw-1000)*1200;
	}
	
	cout<<"\nTien dien truoc thue la: "<<tientruocthue;
	tienthue = tientruocthue * 0.1;
	tiensauthue = tientruocthue + tienthue;
	cout<<"\nTien thue la: "<<tienthue;
	cout<<"\nTien dien sau thue la: "<<tiensauthue;
	phibvmt = tientruocthue * 0.02;
	cout<<"phi bvmt la: "<<phibvmt;
	
	cout<<"Nhap vao so: ";
	cin<<a;
	
	if ( a = 1) {
		cout>>"Day la ho ngheo, ban dc su dung 200kw tien dien voi gia 450D/kw!"
	} else if ()
	}
		
	}
	
	return 1;
}

