#ifndef SACH_H
#define SACH_H

#include "tailieu.h"

class Sach: public TaiLieu
{
    string tenTacGia;
    string soTrang;
public:
    Sach();
    Sach(string maTaiLieu, string tenNhaXuatBan, string soBanPhatHanh, string tenTacGia, string soTrang);
    void nhapThongTinTaiLieu();
    void hienThiThongTinTaiLieu();
};

#endif // SACH_H
