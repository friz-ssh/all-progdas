#include <iostream>
#include <string>
using namespace std;

struct Spesifikasi
{
    string merk;
    string tipe;
    int ram;         // dalam GB
    int penyimpanan; // dalam GB
    float layar;     // dalam inci
};

int main()
{
    data_laptop[5] = {
        {"Asus", "ROG Zephyrus G14", 16, 512, 14.0},
        {"Dell", "XPS 13", 8, 256, 13.3},
        {"Apple", "MacBook Air M1", 8, 256, 13.3},
        {"HP", "Spectre x360", 16, 512, 13.3},
        {"Lenovo", "ThinkPad X1 Carbon", 16, 1024, 14.0}};

    cout << "Daftar Spesifikasi Laptop:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Laptop " << (i + 1) << ":\n";
        cout << "Merk: " << data_laptop[i].merk << "\n";
        cout << "Tipe: " << data_laptop[i].tipe << "\n";
        cout << "RAM: " << data_laptop[i].ram << " GB\n";
        cout << "Penyimpanan: " << data_laptop[i].penyimpanan << " GB\n";
        cout << "Layar: " << data_laptop[i].layar << " inci\n";
        cout << "--------------------------\n";
    }
}