#include <iostream>
using namespace std;

int main() {
	int a,b;
	
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	
	cout<<"a == b && a < b: "<<( a == b && a < b);
	cout<<"\n == b && a > b: "<<( a == b && a > b);
	cout<<"\na != b && a < b: "<<( a != b && a < b);
	cout<<"\na != b && a > b: "<<( a != b && a > b);
	
	cout<<"\na == b || a < b: "<<( a == b || a < b);
	cout<<"\na == b || a > b: "<<( a == b || a > b);
	cout<<"\na != b || a < b: "<<( a != b || a < b);
	cout<<"\na != b || a > b: "<<( a != b || a > b);
	
	cout<<"\n!( a == b): "<<!( a == b ); 
	
	return 0;
}
