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
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
}
//LinearSearch khong su dung linh canh!!
/*int LinearSearch(int a[], int n, int x)
{
	int i = 0;
	while (i < n)
	{
		if (a[i] == x) 
			return i;
		i++;
	} return -1;
}*/
//LinearSearch co su dung linh canh!
int LinearSearchLC(int a[], int n, int x)
{
	bool timthay = false;
	int vt = -1;
	int i = 0;
	while (i < n && !timthay)
	{
		if (a[i] == x)
		{
			timthay = true;
			vt = i;
		}
		i++;
	} return vt;
}
void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
//Sapxep noi bot theo thu tu tang dan
void BubbleSort(int a[],int n)
{
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				Swap(a[j], a[j - 1]);
}
int main()
{
	srand(time(0));
	int mang[MAX], spt, x;
	NhapMang(mang, spt);
	cout << "Mang cua ban la: ";
	XuatMang(mang, spt);
	cout << "\nMoi ban nhap so can tim: ";
	cin >> x;
	int vt = LinearSearchLC(mang, spt, x);
	if (vt != -1)
		cout << "Co gia tri " << x << " va tai vi tri " << vt;
	else 
		cout << "Khong co so " << x << " ma ban can tim !";
	BubbleSort(mang, spt);
	cout << "\nMang sau khi sap xep theo thu tu tang dan: ";
	XuatMang(mang, spt);
	int t = _getch();
	return 0;
}