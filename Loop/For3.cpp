#include<iostream>
using namespace std;

int main() {
	int i = 0;
	while(i <= 100) {
		i++;
		
		if (i == 60) {
			continue;
		}
		cout<<"\ni = "<<i;
	}
}
