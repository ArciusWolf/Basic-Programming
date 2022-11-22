#include <iostream>
using namespace std;

int main() {
	int day = 0;
	cout<<"Enter the number: ";
	cin>>day;
	if ( day == 1 ){
		cout<<"Monday";
	} else if ( day == 2 ) {
		cout<<"Tuesday";
	} else if ( day == 3 ) {
		cout<<"Wednesday";
	} else if ( day == 3 ) {
		cout<<"Thursday";
	} else if ( day == 4 ) {
		cout<<"Friday";
	} else if ( day == 5 ) {
		cout<<"Saturday";
	} else if ( day == 6 ) {
		cout<<"Sunday";
	} else {
		cout<<"Invalid day!";
	}
	return 0;
}
