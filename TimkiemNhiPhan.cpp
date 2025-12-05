#include <iostream>
#include <conio.h>
#include <cstdlib>  
#include <ctime>
using namespace std;
#define MAX 30
void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		cout << a[i] << " | ";
	cout << a[n - 1];
}
void BubbleSort(int a[], int n)
{
	int t;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
}
int BinarySearch(int a[], int& n, int& x)
{
	int dau = 0, giua, cuoi = n - 1;
	while (dau <= cuoi)
	{
		int giua = (dau + cuoi) / 2;
		if (a[giua] == x)
			return giua;
		if (a[giua] < x)
		{
			dau += 1;
		}
		else
		{
			cuoi -= 1;
		}
	}
	return -1;
}
int main()
{
	srand(time(NULL));
	int mang[MAX], spt, gt;
	NhapMang(mang, spt);
	cout << "MANG BAN VUA TAO" << endl;
	XuatMang(mang, spt);
	BubbleSort(mang, spt);
	cout << "\nMang sau khi sap xep tang dan: ";
	XuatMang(mang, spt);
	cout << "\nNhap gia tri can tim: ";
	cin >> gt;
	int vt = BinarySearch(mang, spt, gt);
	if (vt != -1)
		cout << "Co gia tri " << gt << " tai vi tri " << vt;
	else cout << "Khong co gia tri " << gt;
	int t = _getch();
	return 0;
}