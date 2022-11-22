#include <iostream>
using namespace std;

int main() {
	int choose = 0;
	
	do {
		
		cout<<"\n----------------------------------------------------------------------------";
		cout<<"\n 1. Nhap vao 1 mang gom 10 so nguyen";
		cout<<"\n 2. In ra phan tu co gia tri lon nhat va nho nhat cua mang nay. ";
		cout<<"\n 3. Hay tinh va in ra tong, va trung binh cong cua cac phan tu cua mang";
		cout<<"\n 4. Hay tinh tong cua cac phan tu chia het cho 3 trong mang";
		cout<<"\n 5. Dem xem mang co bao nhieu phan tu chan va in ket qua";
		cout<<"\n 6. Hien thi noi dung mang";
		cout<<"\n 7. Ket thuc chuong trinh";
		cout<<"\n----------------------------------------------------------------------------";
		cout<<"\n============ Nhap mot so de khoi chay chuong trinh: ============";
		cin>>choose;
		switch (choose){
			case 1:{
				int a[10];
					cout<<"\n1. Nhap vao 1 mang gom 10 so nguyen:";
					for (int i = 0; i < 10; i++)
					cin>>a[i];
				break;
				
			}
		}
	} while ( choose !=7);
	return 1;
}
