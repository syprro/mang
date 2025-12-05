#include <iostream>
#include <string>
using namespace std;
void NhapDuLieu(string hoten[], string cmnd[], int ngaythue[], int n)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin phong " << i << ":\n";
        cout << "Ho ten: ";
        getline(cin, hoten[i]);
        cout << "CMND: ";
        getline(cin, cmnd[i]);
        cout << "Ngay thue: ";
        cin >> ngaythue[i];
        cin.ignore();
    }
}

void TimTheoCMND(string hoten[], string cmnd[], int ngaythue[], int n)
{
    string x;
    cin.ignore();
    cout << "\nNhap CMND can tim: ";
    getline(cin, x);

    for (int i = 0; i < n; i++)
    {
        if (cmnd[i] == x)
        {
            cout << "\n==> Khach co CMND " << x << ":\n";
            cout << "Phong: " << i << endl;
            cout << "Ho ten: " << hoten[i] << endl;
            cout << "Ngay thue: " << ngaythue[i] << endl;
            return;
        }
    }
    cout << "\nKhong tim thay!\n";
}
void TimTheoPhong(string hoten[], string cmnd[], int ngaythue[], int n)
{
    int x;
    cout << "\nNhap so phong X: ";
    cin >> x;

    if (x < 0 || x >= n)
    {
        cout << "Phong khong hop le!\n";
        return;
    }
    cout << "\n==> Thong tin phong " << x << ":\n";
    cout << "Ho ten: " << hoten[x] << endl;
    cout << "CMND: " << cmnd[x] << endl;
    cout << "Ngay thue: " << ngaythue[x] << endl;
}
void TimTheoTen(string hoten[], string cmnd[], int ngaythue[], int n)
{
    string ten;
    cin.ignore();
    cout << "\nNhap ho ten can tim: ";
    getline(cin, ten);

    for (int i = 0; i < n; i++)
    {
        if (hoten[i] == ten)
        {
            cout << "\n==> Khach hang tim thay:\n";
            cout << "Phong: " << i << endl;
            cout << "CMND: " << cmnd[i] << endl;
            cout << "Ngay thue: " << ngaythue[i] << endl;
            return;
        }
    }
    cout << "\nKhong tim thay!\n";
}

int main()
{
    int n;
    cout << "Nhap so phong N: ";
    cin >> n;
    string hoten[100];
    string cmnd[100];
    int ngaythue[100];
    NhapDuLieu(hoten, cmnd, ngaythue, n);
    int chon;
    do
    {
        cout << "\n===== MENU =====";
        cout << "\n1. Tim theo CMND";
        cout << "\n2. Tim theo so phong";
        cout << "\n3. Tim theo ho ten";
        cout << "\nChon: ";
        cin >> chon;
        switch (chon)
        {
        case 1: TimTheoCMND(hoten, cmnd, ngaythue, n); break;
        case 2: TimTheoPhong(hoten, cmnd, ngaythue, n); break;
        case 3: TimTheoTen(hoten, cmnd, ngaythue, n); break;
        }
    } while (chon != 0);
    return 0;
}