#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
#define MAX 30
void NhapMang(int a[], int& n)
{
	cout << "Moi ban nhap so luong phan tu cua Mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 50;
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
		cout << a[i] << " | ";
	cout << a[n - 1];
}
//Xoa dau mang
void XoaDau(int a[], int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//Xoa vi tri bat ki
void Xoabk(int a[], int& n, int& vt)
{
	do 
	{
		cout << "\nNhap vi tri ban muon xoa: ";
		cin >> vt;
		if (vt <= 0 || vt >= n)
			cout << "Vui long nhap lai";
	} while (vt <= 0 || vt >= n);
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
//Xoa cuoi
void XoaCuoi(int a[], int& n)
{
	n--;
}
//Sua vi tri ban muon
void Sua(int a[], int n, int vt, int x)
{
	a[vt] = x;
}
int main()
{
	srand(time(NULL));
	int mang[MAX], spt, vt, i, x;
	NhapMang(mang, spt);
	cout << "Mang cua ban la: ";
	XuatMang(mang, spt);
	XoaDau(mang, spt);
	cout << "\nMang sau khi xoa vi tri dau tien: ";
	XuatMang(mang, spt);
	Xoabk(mang, spt, vt);
	cout << "Mang sau khi xoa vi tri " << vt << " la: ";
	XuatMang(mang, spt);
	XoaCuoi(mang, spt);
	cout << "\nMang sau khi xoa vi tri cuoi cung la: ";
	XuatMang(mang, spt);
	do
	{
		cout << "\nNhap vi tri ban muon sua: ";
		cin >> i;
	} while (i < 0 || i > spt);
	cout << "Nhap gia tri ban muon them vao vi tri " << i << " : ";
	cin >> x;
	Sua(mang, spt, i, x);
	cout << "Mang sau khi thay doi la: ";
	XuatMang(mang, spt);
	int t = _getch();
	return 0;
}