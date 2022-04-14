#include "QLTV.h"
#include <string.h>

int main(){
    string mtl;
    QLTV *qltv = new QLTV();
    qltv->nhapThongTinTaiLieu();
    cout << "Nhap ma tai lieu can tim: ";
    getline(cin, mtl);
   qltv->timKiemTaiLieu(mtl);
   cout << "Nhap ma tai lieu muon xoa: ";
   getline(cin,mtl);
   qltv->xoaTaiLieu(mtl);


   if(qltv != NULL){
       delete qltv;
       qltv = NULL;
   }
}
