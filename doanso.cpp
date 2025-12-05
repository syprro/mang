#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int M1[] = { 1,3,5,7,9 };
int M2[] = { 2,3,6,7,10 };
int M3[] = { 4,5,6,7 };
int M4[] = { 8,9,10 };
int DapAn(int a[], int n, string cauhoi)
{
	char chon;
	cout << cauhoi;
	for (int i = 0; i < n; i++)
		cout << " " << a[i] << " ";
	cout << ": ";
	cin >> chon;
	if ((chon == 'c') || (chon == 'C'))
		return a[0];
	return 0;
}
int main()
{
	int sodoan = 0;
	cout << "Ban hay suy nghi chon mot so tu 1->10!!";
	cout << "\nChon xong hay nhan enter!";
	int t = _getch();
	system("cls");
	string cau_hoi = "So ban nghi co trong day khong (k/c)? : ";
	sodoan += DapAn(M1, size(M1), cau_hoi);
	sodoan += DapAn(M2, size(M2), cau_hoi);
	sodoan += DapAn(M3, size(M3), cau_hoi);
	sodoan += DapAn(M4, size(M4), cau_hoi);
	cout << "So ma ban suy nghi la: " << sodoan;
	t = _getch();
	return 0;
}