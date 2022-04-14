#ifndef TAILIEU_H
#define TAILIEU_H
#include <iostream>
#include <string.h>
using namespace std;

class TaiLieu
{
protected:
    string maTaiLieu;
    string tenNhaXuatBan;
    string soBanPhatHanh;
public:
    TaiLieu();
    TaiLieu(string maTaiLieu, string tenNhaXuatBan, string soBanPhatHanh);
    virtual void nhapThongTinTaiLieu();
    virtual void hienThiThongTinTaiLieu();
    string getMaTaiLieu();

};

#endif // TAILIEU_H
