#include "tapchi.h"

TapChi::TapChi()
{

}

void TapChi::nhapThongTinTaiLieu(){
    TaiLieu::nhapThongTinTaiLieu();
    cout << "\tNhap so phat hanh: "; getline(cin, soPhatHanh);
    cout << "\tNhap thang phat hanh: "; getline(cin, thangPhatHanh);
}

void TapChi::hienThiThongTinTaiLieu(){
    TaiLieu::hienThiThongTinTaiLieu();
    cout << "\tSo phat hanh: " << soPhatHanh << endl;
    cout << "\tThang phat hanh: " << thangPhatHanh << endl;
}
