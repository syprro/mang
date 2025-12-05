#include <iostream>
#include <conio.h>
using namespace std;
struct Hocsinh
{
	char hoten[50];
	char mshs[4];
	float diem1, diem2, diem3;
};
void NhapHS(Hocsinh& hs)
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	cin.getline(hs.hoten, 50);
	do
	{
		cout << "\nNhap ma so hoc sinh (XXX): ";
		cin >> hs.mshs;
	} while (strlen(hs.mshs) != 3);
	cout << "\nNhap diem mon 1: ";
	cin >> hs.diem1;
	cout << "\nNhap diem mon 2: ";
	cin >> hs.diem2;
	cout << "\nNhap diem mon 3: ";
	cin >> hs.diem3;
}
void NhapLop(Hocsinh lop[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap hoc sinh thu " << i + 1;
		NhapHS(lop[i]);
		cin.ignore();
	}
}
float DTB(Hocsinh hs)
{
	return (hs.diem1 + hs.diem2 + hs.diem3) / 3;
}
void InHS(Hocsinh hs)
{
	cout << "\nHo ten hoc sinh: " << hs.hoten << endl;
	cout << "\nMa so hoc sinh: " << hs.mshs << endl;
	cout << "\nDiem mon 1: " << hs.diem1 << endl;
	cout << "\nDiem mon 2: " << hs.diem2 << endl;
	cout << "\nDiem mon 3: " << hs.diem3 << endl;
	cout << "\nDiem trung binh ba mon la: " << DTB(hs);
}
void InLop(Hocsinh lop[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nIn hoc sinh thu " << i + 1;
		InHS(lop[i]);
	}
}
int main()
{
	Hocsinh lop[3];
	int sohs;
	cout << "Nhap so hoc sinh: ";
	cin >> sohs;
	cin.ignore();
	NhapLop(lop, sohs);
	cout << "\n--------------------------------------------";
	InLop(lop, sohs);
	int t = _getch();
}