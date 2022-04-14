#ifndef TAPCHI_H
#define TAPCHI_H

#include "tailieu.h"

class TapChi: public TaiLieu
{
    string soPhatHanh;
    string thangPhatHanh;
public:
    TapChi();
    TapChi(string maTaiLieu, string tenNhaXuatBan, string soBanPhatHanh, string tenTacGia, string soTrang);
    void nhapThongTinTaiLieu();
    void hienThiThongTinTaiLieu();
};

#endif // TAPCHI_H
