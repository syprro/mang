#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Nhanvien
{
	char hoten[41];
	char mnv[6];
	float luongcoban;
	int ngaycong;
	float hspc;
};
float luong(Nhanvien nv)
{
	return (nv.luongcoban * nv.ngaycong + nv.hspc);
}
void NhapNV(Nhanvien a[], int& n)
{
	do
	{
		cout << "Nhap so nhan vien: ";
		cin >> n;
		if (n < 3)
			cout << "So nhan vien khong hop le!";
	} while (n < 3);
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap nhan vien thu " << i + 1;
		cin.ignore();
		cout << "\nNhap ho ten nhan vien: ";
		cin.getline(a[i].hoten, 41);
		cout << "\nNhap ma nhan vien: ";
		cin >> a[i].mnv;
		cout << "\nNhap luong co ban: ";
		cin >> a[i].luongcoban;
		cout << "\nNhap ngay cong: ";
		cin >> a[i].ngaycong;
		cout << "\nNhap he so phu cap: ";
		cin >> a[i].hspc;
	}
}
void XuatNV(Nhanvien a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1;
		cout << "\nHo ten nhan vien: " << a[i].hoten;
		cout << "\nMa nhan vien: " << a[i].mnv;
		cout << "\nLuong co ban: " << a[i].luongcoban;
		cout << "\nNgay cong: " << a[i].ngaycong<<endl;
		cout << "\nHe so phu cap: " << a[i].hspc;
		cout << "\nLuong chinh thuc: " << luong(a[i]);
	}
}
void Sort(Nhanvien a[], int n)
{
	Nhanvien t;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(a[j].mnv, a[j - 1].mnv) < 0)
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
}
/*int TimMNV(Nhanvien a[], int n, char x[])
{
	int dau = 0, giua, cuoi = n - 1;
	while (dau <= cuoi)
	{
		giua = (dau + cuoi) / 2;
		if (strcmp(a[giua].mnv, x) == 0)
			return giua;
		if (strcmp(a[giua].mnv, x) < 0)
			dau += 1;
		else cuoi -= 1;
	}
	return -1;
}*/
void TimM(Nhanvien a[], int n,char x[])
{
	char c[5];
	cout << "Nhap ma so nhan vien can tim: ";
	cin >> c;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].mnv, c) == 0)
		{
			cout << "\n>>> Tim thay tai phong " << i + 1;
			cout << "\nHo ten: " << a[i].hoten;
			cout << "\nMa nhan vien: " << a[i].mnv;
			cout << "\nLuong co ban: " << a[i].luongcoban;
			cout << "\nSo ngay cong: " << a[i].ngaycong;
			cout << "\nHe so phu cap: " << a[i].hspc;
			return;
		}
		cout << "\nKhong tim thay ma nhan vien!\n";
	}
}

int main()
{
	Nhanvien mang[41];
	int sonv;
	NhapNV(mang, sonv);
	XuatNV(mang, sonv);
	cout << "\n=============================================\n";
	Sort(mang, sonv);
	cout << "\nMang nhan vien sau khi sap xep tang gian theo mnv\n";
	XuatNV(mang, sonv);
	char x[5];
	int vt = TimMNV(mang, sonv, x);
	/*if (vt != 1)
		cout << "\nCo ma so cua nhan vien o vi tri " << vt + 1;
	else cout << "\nKhong co ma so nhan vien!";*/
	cout << "\n=============================================\n";
	TimM(mang, sonv,x);
	int u = _getch();
	return 0;
}