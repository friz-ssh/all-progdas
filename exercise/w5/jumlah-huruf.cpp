#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Kalimat;
    cout << "Pengecekan Jumlah Huruf" << endl;
    cout << "-----------------------------" << endl;
    cout << "Masukkan Kalimat: ";
    getline(cin, Kalimat); // Menggunakan getline untuk membaca kalimat dengan spasi

    int jmlVokal = 0;
    int jmlKonsonan = 0;
    int jmlHuruf = 0;

    for (int i = 0; i < Kalimat.length(); ++i)
    {
        char ch = tolower(Kalimat[i]); // Mengubah karakter menjadi huruf kecil
        if ((ch >= 'a' && ch <= 'z'))  // Memeriksa apakah karakter adalah huruf a-z
        {
            jmlHuruf++; // Menghitung jumlah huruf
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                jmlVokal++; // Menghitung jumlah huruf vokal
            }
            else
            {
                jmlKonsonan++; // Menghitung jumlah huruf konsonan
            }
        }
    }

    cout << "Jumlah Huruf: " << jmlHuruf << endl;
    cout << "Jumlah Huruf Vokal: " << jmlVokal << endl;
    cout << "Jumlah Huruf Konsonan: " << jmlKonsonan << endl;
    return 0;
}

// Muhammad Affriza Ayman Nashmi
// 25/559828/TK/63201
// Teknologi Informasi - B