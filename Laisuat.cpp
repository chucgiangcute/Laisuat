// Laisuat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>

using namespace std;
int main()
{

	int x;
	float tienlai, tiengui, laisuat, thoihan;
	for(thoihan = 12; thoihan >= 0; thoihan++)
	{
		cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cout << "Nhap tien gui ban dau (VND): ";
		cin >> tiengui;
		cout << "Nhap lai suat hang nam (%): ";
		cin >> laisuat;
		cout << "Nhap thoi han gui (nam): ";
		cin >> thoihan;
		tienlai = (tiengui * laisuat * thoihan) / 100;
		cout << "Tien gui ban dau = " << tiengui << endl;
		cout << "Lai suat = " << laisuat << "%" << endl;
		cout << "Thoi han = " << thoihan << " nam" << endl;
		cout << "So tien lai = " << tienlai << endl;
	}
	return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
	float tienlai, tiengui, laisuat, thoihan, tongtien,i;
	for (thoihan = 12; thoihan >= 0; thoihan++)
	{
		cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cout << "Nhap tien gui ban dau (VND): ";
		cin >> tiengui;
		cout << "Nhap lai suat hang nam (%): ";
		cin >> laisuat;
		cout << "Nhap thoi han gui (nam): ";
		cin >> thoihan;
		tienlai = (tiengui * laisuat * thoihan) / 100;
		cout << "Tien gui ban dau = " << tiengui << endl;
		cout << "Lai suat = " << laisuat << "%" << endl;
		cout << "Thoi han = " << thoihan << " nam" << endl;
		cout << "So tien lai = " << tienlai << endl;
		for (float i= 1; i <= thoihan; ++i) {
			tongtien += tiengui * laisuat;
		}
	}
	return 0;
}*/


#include <iostream>
using namespace std;

int main()
{
	float tiengui, laisuat, thoihan;
	float tienlai = 0; 
	cout << "Nhap so tien gui ban dau, lai suat va thoi han (Nhap thoi han <= 12):" << endl;
	cout << "Nhap tien gui ban dau (VND): ";
	cin >> tiengui;
	cout << "Nhap lai suat hang nam (%): ";
	cin >> laisuat;
	cout << "Nhap thoi han gui (nam): ";
	cin >> thoihan;

	float tongtien = tiengui; // Số tiền gốc 

	// Chuyển đổi lãi suất
	laisuat /= 100.0;

	tienlai = (tiengui * laisuat * thoihan);

	for (int i = 1; i <= thoihan; ++i) {
		tongtien += tongtien * laisuat;
	}

	cout << "\nTien gui ban dau = " << tiengui << " VND" << endl;
	cout << "Lai suat = " << laisuat * 100 << "%" << endl;
	cout << "Thoi han = " << thoihan << " nam" << endl;
	cout << "So tien lai = " << tienlai << " VND" << endl;
	cout << "So tien sau " << thoihan << " nam voi lai suat cong don = " << tongtien << " VND" << endl;

	return 0;
}

