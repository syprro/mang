#include <iostream>
#include <conio.h>
using namespace std;

int M1[] = { 1,3,5,7,9 };
int M2[] = { 2,3,6,7,10 };
int M3[] = { 4,5,6,7 };
int M4[] = { 8,9,10 };

int DapAn(int a[], int n)
{
    char chon;
    cout << "So ban nghi co trong day khong (k/c)? ";
    for (int i = 0; i < n; i++)
        cout << " " << a[i] << " ";
    cout << " : ";
    cin >> chon;
    if (chon == 'c' || chon == 'C')
        return a[0];
    return 0;   
}

int main()
{
    int sodoan = 0;
    cout << "Ban hay suy nghi mot so tu 1 -> 10 !!\n";
    cout << "Chon xong nhan ENTER...";
    int t=_getch();                
    system("cls");
    sodoan += DapAn(M1, size(M1));
    sodoan += DapAn(M2, size(M2));
    sodoan += DapAn(M3, size(M3));
    sodoan += DapAn(M4, size(M4));
    cout << "\nSo ma ban dang nghi la: " << sodoan;
    t=_getch();
    return 0;
}