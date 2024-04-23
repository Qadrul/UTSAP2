#include <iostream>
#include <string>

using namespace std;

int main() {
    int pilihan;
    string nama_capres_dan_cawapres;

    cout << "Daftar Calon Presiden dan Calon Wakil Presiden:\n";
    cout << "1. Wiranto- Salahuddin Wahid\n";
    cout << "2. Megawati Soekarnoputri-Hasyim Muzadi\n";
    cout << "3. Amien Rais-Siswono Yudo Husodo\n";
    cout << "4. Soesilo Bambang Yudhoyono-Jusuf Kalla\n";
    cout << "5. Hamzah Haz dan Agum Gumelar\n";
    
    cout << "Masukkan Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            nama_capres_dan_cawapres = "Wiranto- Salahuddin Wahid";
            break;
        case 2:
            nama_capres_dan_cawapres = "Megawati Soekarnoputri-Hasyim Muzadi";
            break;
        case 3:
            nama_capres_dan_cawapres = "Amien Rais-Siswono Yudo Husodo";
            break;
        case 4:
            nama_capres_dan_cawapres = "Soesilo Bambang Yudhoyono-Jusuf Kalla";
            break;
        case 5:
            nama_capres_dan_cawapres = "Hamzah Haz dan Agum Gumelar";
            break;
        
        default:
            cout << "Pilihan tidak valid.\n";
            return 1; // Keluar dari program jika pilihan tidak valid
    }

    cout << "\033[2J\033[1;1H";  /*clear screen*/
    
    cout << "Pilihan Anda telah disimpan, Anda memilih " << pilihan << ". " << nama_capres_dan_cawapres << endl;

    return 0;
}
