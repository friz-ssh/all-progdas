/* SOAL NOMOR 5 */
#include <iostream>
using namespace std;

int main()
{
    // Matriks dengan ukuran 4 x 7
    char matriks[4][7];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (j >= 3 - i && j <= 3 + i)
            {
                matriks[i][j] = '*'; // Isi dengan bintang
            }
            else
            {
                matriks[i][j] = ' '; // Isi dengan spasi
            }
            cout << matriks[i][j];
        }
        cout << endl;
    }
    return 0;
}
