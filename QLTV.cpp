#include "QLTV.h"
#include <string.h>
QLTV::QLTV()
{

}

QLTV::~QLTV(){
    if(tl != NULL){
        delete tl;
        tl = NULL;
    }
}

void QLTV::themTaiLieu(TaiLieu *tl){
    qltv.push_back(tl);
}

void QLTV::nhapThongTinTaiLieu(){
    string yesNo;
    int chon;
    do{
     cout << "-----Ban muon nhap tai lieu loai gi?----- " << endl;
                cout << "Chon tai lieu muon nhap (1-Sach; 2-Bao; 3-Tap chi): ";
                cin >> chon;
                fflush(stdin);

                switch (chon) {
                case SACH:
                    tl = new Sach();
                    break;
                case BAO:
                    tl = new Bao();
                    break;
                case TAPCHI:
                    tl = new TapChi();
                    break;

                default:
                    tl = new Sach();
                    break;
                }

                tl->nhapThongTinTaiLieu();

                themTaiLieu(tl);
                cout << "Ban co muon tiep tuc khong? (yes/no): ";
                        getline(cin, yesNo);
    } while (strcmp(yesNo.c_str(), "yes") == 0);
}

void QLTV::timKiemTaiLieu(string maTaiLieu){
    for (TaiLieu *tl : qltv) {
                if (strcmp(maTaiLieu.c_str(), tl->getMaTaiLieu().c_str())==0) {
                    tl->hienThiThongTinTaiLieu();
                }
            }
}

void QLTV::xoaTaiLieu(string maTaiLieu){
    int count = 0;
    for (TaiLieu *tl : qltv) {
        count++;
                if (strcmp(maTaiLieu.c_str(), tl->getMaTaiLieu().c_str())==0) {
                   auto itr = qltv.begin();
                       for (int i=1; i < count; i++ )
                           ++itr;
                    qltv.erase(itr);
                    cout << "Da xoa tai lieu co ma: " << maTaiLieu << endl;
                }

            }
}

