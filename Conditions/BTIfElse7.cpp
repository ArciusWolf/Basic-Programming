#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Enter your score: ";
	cin>>a;
	
	if ( a < 8){
		cout<<"No travel!";
	}
	else {
		cout<<"Travel!";
	}
	return 0;
}
