#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,m, time;
    cout<<"Hay nhap so nguyen thu nhat: ";
    cin>>n;
    for (int n=0; n<2399; n++){
        if ((n%100) > 60 ){
        n = n + 100 - 60;
    }
    if (n>2359){
        n = n - 2400;
        if (n>2400){
            n = n-2400;
        }
    }
    }
    cout<<n;
/**     cout<<"Hay nhap so nguyen thu hai: ";
    cin>>m;
    if ((m%100) > 60 ){
        m = m + 100 - 60;
    }
    if (m>2359){
        m = m - 2400;
    }
time = n + m;
if (time > 2399)
cout<<"\n"<<time;*/
    return 1;
}