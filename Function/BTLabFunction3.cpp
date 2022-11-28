#include <iostream>
using namespace std;

int ThamSo(int a,int b,int c){
        if (a < b){
            a = b;
        }
        if (b < c){
            a = c;
        }

    return a;
}
float tbc(float a,float b, float c, float d){
    return (a+b+c+d)/4;
}
int main(){
    int a,b,c,d;
    cout<<"Nhap tham so: ";
    cin>>a>>b>>c>>d;
    int GTLN = ThamSo(a,b,c);
    float TBC = tbc(a,b,c,d);
    cout<<"Gia tri lon nhat trong 3 tham so la: "<<GTLN;
    cout<<"\nTrung binh cong 4 tham so la: "<<TBC;
    return 1;
}