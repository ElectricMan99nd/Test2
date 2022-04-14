#include "bao.h"

Bao::Bao()
{

}

void Bao::nhapThongTinTaiLieu(){
    TaiLieu::nhapThongTinTaiLieu();
    cout << "\tNhap ngay phat hanh: "; getline(cin, ngayPhatHanh);
}

void Bao::hienThiThongTinTaiLieu(){
    TaiLieu::hienThiThongTinTaiLieu();
    cout << "\tNgay phat hanh: " << ngayPhatHanh << endl;
}
