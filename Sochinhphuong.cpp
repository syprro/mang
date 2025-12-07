#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Nhap so n: ";
		cin >> n;
		if (n < 100 || n>999)
			cout << "Gia tri khong hop le vui long nhap lai!";
	} while (n < 100 || n>999);
	int tong = 0, tram, chuc, donvi;
	tram = n / 100;
	chuc = (n / 10) % 10;
	donvi = n % 10;
	tong = tram + chuc + donvi;
	cout << "Tong cac chu so trong " << n << " la: " << tong;
	cout << "\nCac chu so chinh phuong la: ";
	if (sqrt(tram) * sqrt(tram) == tram)
		cout << tram << " , ";
	if (sqrt(chuc) * sqrt(chuc) == chuc)
		cout << chuc << " , ";
	if (sqrt(donvi) * sqrt(donvi) == donvi)
		cout << donvi;
	int t = _getch();
	return 0;
}
