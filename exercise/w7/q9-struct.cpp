/* SOAL NOMOR 9 */
#include <iostream>
#include <string>
using namespace std;

struct Spesifikasi
{
    string merk;
    string tipe;
    int ram;     // dalam GB
    int storage; // dalam GB
    float layar; // dalam inci
};

int main()
{
    // Daftar spesifikasi laptop
    Spesifikasi data_laptop[5] = {
        {"Asus", "Zenbook A14", 32, 512, 14.0},
        {"Acer", "Nitro V15", 16, 512, 15.6},
        {"Apple", "MacBook Air M4", 16, 256, 13.6},
        {"HP", "Dragonfly G4", 32, 1024, 13.5},
        {"Lenovo", "ThinkPad T480", 8, 256, 14.0}};

    // Mencetak data spesifikasi laptop
    cout << "Daftar Spesifikasi Laptop:" << endl;
    cout << "--------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Laptop " << (i + 1) << "   :\n";
        cout << "Merk       : " << data_laptop[i].merk << endl;
        cout << "Tipe       : " << data_laptop[i].tipe << endl;
        cout << "RAM        : " << data_laptop[i].ram << " GB" << endl;
        cout << "Storage    : " << data_laptop[i].storage << " GB" << endl;
        cout << "Layar      : " << data_laptop[i].layar << " inci" << endl;
        cout << "--------------------------\n";
    }

    // Mencetak ukuran struct dan ukuran masing-masing anggota
    cout << "Ukuran Data dalam Bytes:" << endl;
    cout << "-------------------------" << endl;
    cout << "Ukuran Spesifikasi: " << sizeof(Spesifikasi) << " bytes" << endl;
    cout << "Ukuran Merk: " << sizeof(data_laptop[0].merk) << " bytes" << endl;
    cout << "Ukuran Tipe: " << sizeof(data_laptop[0].tipe) << " bytes" << endl;
    cout << "Ukuran RAM: " << sizeof(data_laptop[0].ram) << " bytes" << endl;
    cout << "Ukuran Storage: " << sizeof(data_laptop[0].storage) << " bytes" << endl;
    cout << "Ukuran Layar: " << sizeof(data_laptop[0].layar) << " bytes" << endl;
    cout << "Total ukuran array data_laptop: " << sizeof(data_laptop) << " bytes" << endl;
    cout << "-------------------------" << endl;

    return 0;
}