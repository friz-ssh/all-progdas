/* SOAL NOMOR 4 */
#include <iostream>
using namespace std;

int main()
{
    // Inisialisasi variabel
    int iterasi = 0;
    float v_awal, t_awal = 0.0, h_benda = 0.0, selang_waktu = 3.0;
    const float g = 10; // percepatan gravitasi (m/s^2)

    cout << "Program Pencetak Perubahan Posisi Benda" << endl;
    cout << "=======================================" << endl;
    cout << "Masukkan kecepatan awal (m/s): ";
    cin >> v_awal;
    cout << "Iterasi \t Waktu (s) \t Posisi (m)" << endl;
    cout << "-----------------------------------------" << endl;

    do
    {
        // s = v0 * t + 0.5 * g * t^2
        h_benda = v_awal * t_awal - 0.5 * g * t_awal * t_awal;

        if (h_benda >= 0)
        {
            cout << " " << iterasi << "\t\t " << t_awal << "\t\t " << h_benda << endl;
        }
        iterasi++;
        t_awal += selang_waktu;

    } while (h_benda >= 0);
    return 0;
}
