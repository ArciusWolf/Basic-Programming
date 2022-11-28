#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

void greet(){
    cout<<"Hello!";
}

int main(){
//Goi ham
    int tong = sum(4,7);
    cout<<"Ket qua la: "<<tong;
    return 0;
}