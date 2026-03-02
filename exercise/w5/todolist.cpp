#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Program Untuk Mengelola Daftar Tugas

int main()
{
    vector<string> tugas; // Menyimpan daftar tugas
    int pilihan;

    do
    {
        cout << "--- STOP BERMALAS-MALASAN! ---" << endl;
        cout << "1. Tambah tugas" << endl;
        cout << "2. Lihat daftar tugas" << endl;
        cout << "3. Hapus tugas" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        cin.ignore();

        // Pilihan 1 : Menambahkan tugas
        if (pilihan == 1)
        {
            string task;
            cout << "Tambahkan tugas: ";
            getline(cin, task);
            tugas.push_back(task);
            cout << "Tugas ditambahkan!" << endl;
        }
        // Pilihan 2 : Melihat daftar tugas
        else if (pilihan == 2)
        {
            cout << "\nTugas Anda: " << endl;
            if (tugas.empty())
            {
                cout << "Tidak ada tugas." << endl;
            }
            else
            {
                for (int i = 0; i < tugas.size(); ++i)
                {
                    cout << i + 1 << ". " << tugas[i] << endl;
                }
            }
        }
        // Pilihan 3 : Menandai tugas selesai
        else if (pilihan == 3)
        {
            if (tugas.empty())
            {
                cout << "Tidak ada tugas untuk dihapus.\n";
            }
            else
            {
                int num;
                cout << "Masukkan nomor tugas yang ingin dihapus: ";
                cin >> num;
                if (num > 0 && num <= tugas.size())
                {
                    tugas.erase(tugas.begin() + num - 1);
                    cout << "Tugas berhasil dihapus!\n";
                }
                else
                {
                    cout << "Pilihan tidak valid\n";
                }
            }
        }
        // Pilihan 4 : Keluar dari program
        else if (pilihan == 4)
        {
            cout << "-------------\nSampai Jumpa!\n";
        }
        else
        {
            cout << "Pilihan tidak valid.\n"; // Jika input tidak valid (bukan 1-4)
        }
    } while (pilihan != 4);
    return 0;
}