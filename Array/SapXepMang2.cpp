#include <iostream>
using namespace std;

int main(){
    int a[7] = {5, 7, 2, 0, 6, 8, 9};
    int i, j, temp;

    for (i=0; i<6; i++)
        for (j=i+1; j<7; j++){
            if (a[j] > a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        for (int i= 0; i < 7; i++)
        {
            cout<<"\n"<<a[i];
        }
    return 1;
}
