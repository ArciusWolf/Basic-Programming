#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    string data;
    ifstream file("work.txt");
    while (getline(file, data)){
        cout<<"\n"<<data;
    }

        file.close();
}