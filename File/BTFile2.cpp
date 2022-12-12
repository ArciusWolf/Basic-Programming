#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    string data;
    ofstream file("data.txt");
    for (int i=1; i<=10; i++){
        cout<<"\nNhap du lieu: ";
        getline(cin, data);
        cout<<data<<"\n";
        file<<data;
    }

    file.close();

    string data1;
    ifstream file1("data.txt");
    while (getline(file1, data1)){
        cout<<data1<<"\n";
    }

        file.close();
}