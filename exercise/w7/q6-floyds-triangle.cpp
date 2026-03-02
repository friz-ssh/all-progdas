/* SOAL NOMOR 6 */
#include <iostream>
using namespace std;

int main()
{
    // Inisialisasi variabel
    int baris, num = 1;
    cout << "PROGRAM FLOYD'S TRIANGLE" << endl;
    cout << "========================" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << num << " ";
            ++num;
        }

        cout << endl;
    }

    return 0;
}