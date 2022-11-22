#include <iostream>
using namespace std;

int main() {
	for ( int i=50; i<=100; i++){
		if ( i % 5 == 0 ) {
			cout<<"\ni= "<<i;
			i++;
		}
	}
	return 0;
}
