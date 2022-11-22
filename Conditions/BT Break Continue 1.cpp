#include <iostream>
using namespace std;

int main() {
	int n, giaithua = 1, i = 1;
	cout<<"Nhap so n: ";
	cin>>n;
	
	while (i<n){
		i++;
	giaithua = giaithua * i;
		
	}
	cout<<"Giai thua cua "<< n <<"la: "<<giaithua;
	return 0;
}
