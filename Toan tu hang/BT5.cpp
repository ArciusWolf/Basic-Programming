#include <iostream>
using namespace std;

int main() {
	int time;
	cout<<"Enter work time: ";
	cin>>time;
	
	if ( time > 40 ) {
		cout<<"Your payout: $"<<( (2 * 40) + (2 * (time - 40) * 1.5 ));
	}
		else {
		cout<<"Your payout: $"<<( 2 * time);
	}
	
	return 0;
}
