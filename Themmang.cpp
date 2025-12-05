#include <iostream>
using namespace std;
#define MAX 30
void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua Mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
//Them vao vi tri dau tien cua Mang!
void ThemDau(int a[], int& n, int x)
{
	for (int i = n; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = x;
	n++;
}
//Theo vao vi tri J cua Mang
void ThemVaoViTriJ(int a[], int& n, int x, int j)
{
	for (int i = n; i > j; i--)
	{
		a[i] = a[i - 1];
	}
	a[j] = x;
	n++;
}
void ThemCuoi(int a[], int& n, int x)
{
	a[n] = x;
	n++;
}
int main()
{
	int mang_nguyen[MAX], spt;
	NhapMang(mang_nguyen, spt);
	cout << "\nMang ban vua nhap la: ";
	XuatMang(mang_nguyen, spt);
	ThemDau(mang_nguyen, spt, 100);
	cout << "\nMang ban vua them 100 vao vi tri dau tien la: ";
	XuatMang(mang_nguyen, spt);
	ThemVaoViTriJ(mang_nguyen, spt, 200, 2);
	cout << "\nMang ban vua them 200 vao vi tri thu 2 la: ";
	XuatMang(mang_nguyen, spt);
	ThemCuoi(mang_nguyen, spt,300);
	cout << "\nMang ban vua them 300 vao vi tri cuoi cung la: ";
	XuatMang(mang_nguyen, spt);
	return 0;
}
