#include "tailieu.h"

TaiLieu::TaiLieu()
{

}

TaiLieu::TaiLieu(string maTaiLieu, string tenNhaXuatBan, string soBanPhatHanh)
{
    this->maTaiLieu = maTaiLieu;
    this->tenNhaXuatBan = tenNhaXuatBan;
    this->soBanPhatHanh = soBanPhatHanh;
}

void TaiLieu::nhapThongTinTaiLieu(){
    cout << "\tNhap ma tai lieu: "; getline(cin, maTaiLieu);
    cout << "\tNhap ten nha xuat ban: "; getline(cin, tenNhaXuatBan);
    cout << "\tNhap so ban phat hanh: "; getline(cin, soBanPhatHanh);
}

void TaiLieu::hienThiThongTinTaiLieu(){
    cout << "\tMa tai lieu: " << maTaiLieu << endl;
    cout << "\tTen nha xuat ban: " << tenNhaXuatBan << endl;
    cout << "\tSo ban phat hanh: " << soBanPhatHanh << endl;
}

string TaiLieu::getMaTaiLieu(){
    return this->maTaiLieu;
}
