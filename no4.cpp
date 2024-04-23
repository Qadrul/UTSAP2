#include <iostream>
using namespace std; //kurang namespace

int main () {
    system ("CLS");

    int a;//seharusnya int bukan string

    umur://menggunakan : bukan ;

    cout << "Tebak Umur Saya : ";//kurang ;
    cin >> a;//cin menggunakn >> bukan <<

    if (a == 20)//=untuk memberikan nilai kalau mau membandingkan menggunkan ==
    {
        cout << "Jawaban Anda Benar" << endl;
    } else {//harusnya else bukan else if
        cout << "Jawaban Salah, Coba Lagi..." << endl;//kurang ;
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}