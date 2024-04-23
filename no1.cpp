#include <iostream>
#include <string>
using namespace std;

int main(){

    /*buat variabel*/
    char kom;
    string nama,nim,pa,matkul,nilaireal;
    int tugas,kuiz,uts,uas,nilai;

    /*isi inputan*/
    cout << "Masukan Nama anda: "; 
        getline(cin, nama);
    cout << "Masukan Nim anda: "; cin >> nim;
    cout << "Masukan Kom anda: "; cin >> kom;
    cin.ignore();                               /*biar gak ke skip next perintahnya*/
    cout << "Masukan Dosen PA anda: "; 
        getline(cin, pa);
    cout << "Masukan Mata Kuliah anda: "; 
        getline(cin, matkul);
    cout << "Masukan nilai Tugas anda: "; cin >> tugas;
    cout << "Masukan nilai Kuiz anda: "; cin >> kuiz;
    cout << "Masukan nilai Uts anda: "; cin >> uts;
    cout << "Masukan nilai Uas anda: "; cin >> uas;

    /*nilai tiap bagian*/
    tugas = tugas * 0.6;
    kuiz = kuiz * 0.1;
    uts = uts * 0.15;
    uas = uas * 0.15;

    nilai = tugas + kuiz + uts + uas;

    /*inilisasi nilai*/
    if (nilai >= 85)
        nilaireal = "A";
    else if (nilai >= 70)
        nilaireal = "B";
    else if (nilai >= 60)
        nilaireal = "C";
    else if (nilai >=40)
        nilaireal = "D";
    else 
        nilaireal = "E";

    cout << "\033[2J\033[1;1H";  /*clear screen*/

    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Kom: " << kom << endl;
    cout << "Dosen PA: " << pa << endl;
    cout << "Mata Kuliah anda: " << matkul << endl;
    
    cout << "nilai anda: " << nilaireal;

return 0;
}