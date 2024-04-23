#include <iostream>

using namespace std;

int main() {
    int n;
    char lanjut;
    
    do{
    cout << "Masukkan nilai n: ";
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; i += 2)  // Menggunakan tambahan 2 agar hanya bilangan ganjil yang dijumlahkan
        total += i * i;

    cout << "n(" << n << ")" << " = " << total << endl;

    cout << "Apakah Anda ingin melanjutkan (y/n)? ";
        cin >> lanjut;

    }while (lanjut == 'y' || lanjut == 'Y'); // agar user bisa memasukan inputan terus menerus

    return 0;
}
