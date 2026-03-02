/* SOAL NOMOR 10 */
#include <iostream>
#include <cstring>
using namespace std;

const int N = 5;

union Teks
{
    char st[64];
};

union Angka
{
    int in;
    float fl;
};

int main()
{
    Teks merk[N], tipe[N];
    Angka ram[N], storage[N], layar[N];

    // Inisialisasi Data
    // Laptop 1
    strcpy(merk[0].st, "Asus");
    strcpy(tipe[0].st, "Zenbook A14");
    ram[0].in = 32;
    storage[0].in = 512;
    layar[0].fl = 14.0f;

    // Laptop 2
    strcpy(merk[1].st, "Acer");
    strcpy(tipe[1].st, "Nitro V15");
    ram[1].in = 16;
    storage[1].in = 512;
    layar[1].fl = 15.6f;

    // Laptop 3
    strcpy(merk[2].st, "Apple");
    strcpy(tipe[2].st, "MacBook Air M4");
    ram[2].in = 16;
    storage[2].in = 256;
    layar[2].fl = 13.6f;

    // Laptop 4
    strcpy(merk[3].st, "HP");
    strcpy(tipe[3].st, "Dragonfly G4");
    ram[3].in = 32;
    storage[3].in = 1024;
    layar[3].fl = 13.5f;

    // Laptop 5
    strcpy(merk[4].st, "Lenovo");
    strcpy(tipe[4].st, "ThinkPad T480");
    ram[4].in = 8;
    storage[4].in = 256;
    layar[4].fl = 14.0f;

    // Cetak
    for (int i = 0; i < N; ++i)
    {
        cout << "Laptop " << (i + 1) << ":\n";
        cout << "  Merk    : " << merk[i].st << '\n';
        cout << "  Tipe    : " << tipe[i].st << '\n';
        cout << "  RAM     : " << ram[i].in << " GB\n";
        cout << "  Storage : " << storage[i].in << " GB\n";
        cout << "  Layar   : " << layar[i].fl << " inci\n";
        cout << "--------------------------\n";
    }

    // Mencetak ukuran union dan ukuran masing-masing anggota
    cout << "Ukuran Data dalam Bytes:" << endl;
    cout << "-------------------------" << endl;
    cout << "Ukuran union Teks: " << sizeof(Teks) << " bytes" << endl;
    cout << "Ukuran union Angka: " << sizeof(Angka) << " bytes" << endl;
    cout << "Total ukuran array merk: " << sizeof(merk) << " bytes" << endl;
    cout << "Total ukuran array tipe: " << sizeof(tipe) << " bytes" << endl;
    cout << "Total ukuran array ram: " << sizeof(ram) << " bytes" << endl;
    cout << "Total ukuran array storage: " << sizeof(storage) << " bytes" << endl;
    cout << "Total ukuran array layar: " << sizeof(layar) << " bytes" << endl;
    cout << "Total ukuran semua data: " << sizeof(merk) + sizeof(tipe) + sizeof(ram) + sizeof(storage) + sizeof(layar) << " bytes" << endl;
    cout << "-------------------------" << endl;
    return 0;
}