#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void NhapMang(int a[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "Nhap [" << i + 1 << " " << j + 1 << "]= ";
			cin>>a[i][j];
		}
}
void XuatMang(int a[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "      ";
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j]<<"   ";
		}
		cout << "\n";
	}
}
void TimDCC(int a[][30], int& n, int& m)
{
	if (n != m)
	{
		cout << "Khong phai la ma tran vuong ";
		return;
	}
	int tongDCC = 0;
	cout << "\nDuong cheo chinh la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i][i]<<" ";
		tongDCC += a[i][i];
	}
	cout << "\nTong duong cheo chinh la: " << tongDCC;
}
void TimDCP(int a[][30], int n, int m)
{
	if (n != m)
		cout << "Khong phai la ma tran vuong!";
	else
	{
		int tongDCP = 0;
		cout << "\nDuong cheo phu la: ";
		for (int i = 0; i < n; i++)
		{
			cout << a[i][n - 1 - i]<<" ";
			tongDCP += a[i][n - 1 - i];
		}
		cout << "\nTong duong cheo phu la: " << tongDCP;
	}
}
void TongDong(int a[][30], int n, int m)
{
	int tongdong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tongdong += a[i][j];
		}
		cout << "\nTong dong thu " << i + 1 << " la: " << tongdong;
		tongdong = 0;
	}
}
void TongCot(int a[][30], int n, int m)
{
	int tongcot = 0;
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			tongcot += a[i][j];
		}
		cout << "\nTong cot thu " << j + 1 << " la: " << tongcot;
		tongcot = 0;
	}
}
int MaTranDV(int a[][30], int n, int m)
{
	if (n != m)
		return 0;
	else
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (i == j && a[i][j] != 1)
					return 0;
				if (i != j && a[i][j] != 0)
					return 0;
			}
	}
	return 1;
}
int MaTranTGT(int a[][30], int n, int m)
{
	if (n != m)
		return 0;
	else
	{
		for (int i = 1; i < n; i++)
			for (int j = 0; j < i; j++)
			{
				if (a[i][j] != 0)
					return 0;
			}
	}
	return 1;
}
int main()
{
	srand(time(NULL));
	int mang[30][30];
	int dong, cot;
	cout << "\nNhap dong va cot cua Ma tran: ";
	cin >> dong >> cot;
	NhapMang(mang, dong, cot);
	cout << "\n====MA TRAN CUA BAN====\n";
	XuatMang(mang, dong, cot);
	TimDCC(mang, dong, cot);
	TimDCP(mang, dong, cot);
	TongDong(mang, dong, cot);
	TongCot(mang, dong, cot);
	if (MaTranDV(mang, dong, cot) == 1)
		cout << "\nLa ma tran don vi!";
	else cout << "\nKhong phai ma tran don vi!";
	if (MaTranTGT(mang, dong, cot) == 1)
		cout << "\nLa ma tran tam giac tren!";
	else cout << "\nKhong phai ma tran tam giac tren!";
	int t = _getch();
	return 0;
}