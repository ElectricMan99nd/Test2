#ifndef BAO_H
#define BAO_H


#include "tailieu.h"

class Bao: public TaiLieu
{
    string ngayPhatHanh;
public:
    Bao();
    Bao(string maTaiLieu, string tenNhaXuatBan, string soBanPhatHanh, string ngayPhatHanh);
    void nhapThongTinTaiLieu();
    void hienThiThongTinTaiLieu();
};

#endif // BAO_H
