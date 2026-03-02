/* SOAL NOMOR 3 */
#include <iostream>
using namespace std;

int main()
{
    // Inisialisasi array deret dengan 7 anggota
    int deret[7];
    int i;

    for (i = 0; i < 7; i++)
        deret[i] = 3 - i;

    for (i = 0; i < 7; i++)
        cout << deret[i] << " ";

    cout << endl;
    return 0;
}