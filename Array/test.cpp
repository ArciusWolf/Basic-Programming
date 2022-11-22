#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int i, n = 0; 
	int item;
	char x[10][12];
	char temp[12];
	cout << "Enter each string on a separate line\n\n";
	cout << "Type 'END' when over \n\n";
	/* read in the list of strings */
	do
	{
		cout << "String " << n+1  << " : ";
		cin >> x[n];
	} while (strcmp(x[n++], "END"));
	n = n -1; //Decrease index of END Element
for(item=0; item<n-1; ++item)
   {
	  /* find lowest of remaining strings */
		for(i=item+1; i<n; ++i)
		{
			if(strcmp (x[item], x[i]) > 0)
			{
				/*interchange two stings */
				strcpy (temp, x[item]);
				strcpy (x[item], x[i]);
				strcpy (x[i], temp);
			}
		 }
	}
	/* Display the arranged list of strings */
	cout << "Recorded list of strings : \n";
	 for(i = 0; i < n ; ++i)
	 {
		cout << "\nString: " << i + 1 << " is " << x[i];
	 }
	return 0;
}
