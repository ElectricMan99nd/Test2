#ifndef QLTV_H
#define QLTV_H

#include "tailieu.h"
#include "sach.h"
#include "bao.h"
#include "tapchi.h"
#include "list"

#define SACH 1
#define BAO 2
#define TAPCHI 3

class QLTV
{
    TaiLieu *tl;
    list <TaiLieu*> qltv;

public:
    QLTV();
    ~QLTV();
    void nhapThongTinTaiLieu();
    void timKiemTaiLieu(string maTaiLieu);
    void themTaiLieu(TaiLieu *tl);
    void xoaTaiLieu(string maTaiLieu);
};

#endif // QLTV_H
