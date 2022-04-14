#include "sach.h"

Sach::Sach()
{

}

void Sach::nhapThongTinTaiLieu(){
    TaiLieu::nhapThongTinTaiLieu();
    cout << "\tNhap ten tac gia: "; getline(cin, tenTacGia);
    cout << "\tNhap so trang: "; getline(cin, soTrang);
}

void Sach::hienThiThongTinTaiLieu(){
    TaiLieu::hienThiThongTinTaiLieu();
    cout << "\tTen tac gia: " << tenTacGia << endl;
    cout << "\tSo trang: " << soTrang << endl;
}

