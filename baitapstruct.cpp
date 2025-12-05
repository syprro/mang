#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
struct Hocsinh
{
	char hoten[50];
	char mshs[4];
	float diem1, diem2, diem3;
};
//Nhap mot hoc sinh
void NhapHS(Hocsinh& hs)
{
	cout << "\nNhap ho ten hoc sinh: ";
	cin.getline(hs.hoten, 50);
	do
	{
		cout << "Nhap ma so hoc sinh (XXX): ";
		cin >> hs.mshs;
	} while (strlen(hs.mshs) != 3);
	cout << "\nNhap diem mon thu 1: ";
	cin >> hs.diem1;
	cout << "\nNhap diem mon thu 2: ";
	cin >> hs.diem2;
	cout << "\nNhap diem mon thu 3: ";
	cin >> hs.diem3;
}
void NhapLop(Hocsinh lop[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap hoc sinh thu: " << i + 1;
		cin.ignore();
		NhapHS(lop[i]);
	}
}
float DTB(Hocsinh hs)
{
	return (hs.diem1 + hs.diem2 + hs.diem3) / 3;
}
void InHS(Hocsinh hs)
{
	cout << "\nHo ten cua hoc sinh: " << hs.hoten;
	cout << "\nMa so hoc sinh: " << hs.mshs;
	cout << "\nDiem cua mon thu 1: " << hs.diem1;
	cout << "\nDiem cua mon thu 2: " << hs.diem2;
	cout << "\nDiem cua mon thu 3: " << hs.diem3;
	cout << fixed << setprecision(2);
	cout << "\nDiem trung binh cua 3 mon la: " << DTB(hs);
}
void InLop(Hocsinh lop[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nHoc sinh thu " << i + 1;
		InHS(lop[i]);
	}
}
void TmTm(Hocsinh lop[], int n, int& vtmax, int& vtmin)
{
	float max = DTB(lop[0]), min = DTB(lop[0]);
	for (int i = 1; i < n; i++)
	{
		if (DTB(lop[i]) > max)
		{
			max = DTB(lop[i]);
			vtmax = i;
		}
		if (DTB(lop[i]) < min)
		{
			min = DTB(lop[i]);
			vtmin = i;
		}
	}
}
int TimMS(Hocsinh lop[], int n, char x[])
{
	int i = 0;
	while (i < n)
	{
		if (strcmp(lop[i].mshs, x) == 0)
			return i;
		i++;
	} return -1;
}
void SapxepMS(Hocsinh lop[], int n)
{
	Hocsinh t;
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(lop[j].mshs, lop[j - 1].mshs) < 0)
			{
				t = lop[j];
				lop[j] = lop[j - 1];
				lop[j - 1] = t;
			}
		}
}
int main()
{
	int sohs, vtmax = 0, vtmin = 0;
	Hocsinh lop[3];
	cout << "Nhap so luong hoc sinh: ";
	cin >> sohs;
	NhapLop(lop, sohs);
	cout << "---------------------------------------------";
	InLop(lop, sohs);
	cout << "\n---------------------------------------------";
	TmTm(lop, sohs, vtmax, vtmin);
	cout << "\nHoc sinh co DTB cao nhat";
	InHS(lop[vtmax]);
	cout << "\nHoc sinh co DTB thap nhat";
	InHS(lop[vtmin]);
	cout << "\n---------------------------------------------";
	char timms[4];
	cout << "\nNhap ma so hoc sinh can tim (XXX): ";
	cin >> timms;
	int vt = TimMS(lop, sohs, timms);
	if (vt == -1)
		cout << "Khong tim thay hoc sinh!";
	else
	{
		cout << "Tim thay hoc sinh tai vi tri: " << vt + 1;
		InHS(lop[vt]);
	}
	cout << "\n---------------------------------------------";
	cout << "\nDanh sach hoc sinh sau khi sap xep ma so hoc sinh tang dan la";
	SapxepMS(lop, sohs);
	InLop(lop, sohs);
	int t = _getch();
	return 0;
}

