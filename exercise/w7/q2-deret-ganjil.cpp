/* SOAL NOMOR 2 */
#include <iostream>
using namespace std;

int main()
{
    // Inisialisasi array deret
    int deret[11];
    int i;

    for (i = 0; i < 11; i++)
        deret[i] = 3 + i * 2;

    for (i = 0; i < 11; i++)
        cout << deret[i] << " ";

    cout << endl;
    return 0;
}