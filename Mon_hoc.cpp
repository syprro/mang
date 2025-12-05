#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Monhoc
{
	char mmh[5];
	char tmh[31];
	int stc;
	float don_gia;
};
void NhapMH(Monhoc a[], int& n)
{
	do
	{
		cout << "\nNhap so mon hoc: ";
		cin >> n;
		if (n < 3)
			cout << "\nSo mon hoc khong hop le!.";
	} while (n < 3);
	for (int i = 0; i < n; i++)
	{
		cout << "\Nhap mon hoc thu " << i + 1;
		cin.ignore();
		cout << "\nNhap ma mon hoc: ";
		cin.getline(a[i].mmh, 5);
		cout << "\nNhap ten mon hoc: ";
		cin.getline(a[i].tmh, 31);
		cout << "\nNhap so tin chi: ";
		cin >> a[i].stc;
		cout << "\nNhap don gia: ";
		cin >> a[i].don_gia;
	}
}
void InMH(Monhoc a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n==>Mon hoc thu " << i + 1 << " la: ";
		cout << "\nMa mon hoc: " << a[i].mmh;
		cout << "\nTen mon hoc: " << a[i].tmh;
		cout << "\nSo tin chi: " << a[i].stc;
		cout << "\nDon gia: " << a[i].don_gia;
	}
}
void TimMMH(Monhoc a[], int n)
{
	char x[5];
	cout << "\nNhap ma mon hoc can tim: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].mmh, x) == 0)
		{
			cout << "\nCo mon hoc o vi tri thu " << i + 1;
			cout << "\nTen mon hoc: " << a[i].tmh;
			cout << "\nSo tin chi: " << a[i].stc;
			cout << "\nDon gia: " << a[i].don_gia;
		}
	}
}
void DonGiaMAX(Monhoc a[], int n)
{
	float max = a[0].don_gia;
	int vt = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i].don_gia > max)
		{
			max = a[i].don_gia;
			vt = i;
		}
	}
	cout << "\nMon hoc co don gia cao nhat la: ";
	cout << "\nMa mon hoc: " << a[vt].mmh;
	cout << "\nTen mon hoc: " << a[vt].tmh;
	cout << "\nSo tin chi: " << a[vt].stc;
}
int main()
{
	Monhoc mang[100];
	int somh;
	NhapMH(mang, somh);
	cout << "\n=============================\n";
	InMH(mang, somh);
	cout << "\n=============================\n";
	TimMMH(mang, somh);
	cout << "\n=============================\n";
	DonGiaMAX(mang, somh);
	return 0;
}