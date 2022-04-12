
#include <iostream>
#include <string>
using namespace std;

class ANPHAM
{
private:
    int ngayxb;
    long donggia;

public:
    string tenxb;
    string ma;
    ANPHAM()
    {
        this->ma = this->tenxb = "";
        this->donggia = 0;
        this->ngayxb = 0;
    }
    ~ANPHAM()
    {
        this->ma = this->tenxb = "";
        this->donggia = 0;
        this->ngayxb = 0;
    }
    void nhap()
    {
        fflush(stdin);
        cout << "Nhap ma san pham:";
        cin >> this->ma;
        fflush(stdin);
        cout << "Nhap ten nha xuat ban:";
        getline(cin, this->tenxb);
        fflush(stdin);
        cout << "Nhap ngay xuat ban:";
        cin >> this->ma;
        cout << "Nhap don gia:";
        cin >> this->donggia;
    }
    void xuat()
    {
        cout << "Ma san pham:" << this->ma << endl;
        cout << "Ma nha xuat ban:" << this->tenxb << endl;
        cout << "Ngay xuat ban:" << this->ngayxb << endl;
        cout << "Don gia:" << this->donggia << endl;
    }
