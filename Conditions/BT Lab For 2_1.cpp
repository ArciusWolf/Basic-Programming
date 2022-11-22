#include <iostream>
using namespace std;

int main() {
	int tong = 0;
	for ( int i=200; i<=500; i++){
		if (i % 3 == 0){
			cout<<"\ni: "<<i;
			tong = tong + i;
			i++;	
		}
	}	
	cout<<"\nTong = "<<tong;
	return 0;
}
