#include <iostream>
using namespace std;

int main() {
    int value1, value2, buff;
    cout << "Masukkan angka 1: ";
    cin >> value1;
    cout << "Masukkan angka 2: ";
    cin >> value2;
    if(value1 > value2) {
        buff = value1; // memmindahkan value1 ke variabel buff
        value1 = value2; // memindahkan value2 ke value1
        value2 = buff; // memindahkan isi calue1 yg telah dipindah ke buff ke value2
    } else { // supaya kalo value1 lebih kecil dari value2 tetep bisa di swap
        buff = value1;
        value1 = value2;
        value2 = buff;
    }
    cout << "angka 1: " << value1 << endl;
    cout << "angka 2: " << value2 << endl;
    return 0;
}