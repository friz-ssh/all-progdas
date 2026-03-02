/* SOAL NOMOR 7 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Halo semua, saya belajar fungsi string di C++!";
    cout << "Teks: " << text << "\n\n";

    // Menghitung ukuran string dalam bytes menggunakan sizeof
    cout << "1. Ukuran string dalam bytes: " << sizeof(text) << " bytes" << endl;
    cout << "-----------------------------------------" << endl;

    // Menghitung panjang text menggunakan <namastring>.length()
    cout << "2. Panjang string: " << text.length() << " karakter" << endl;
    cout << "-----------------------------------------" << endl;

    // Menambahkan kata menggunakan <namastring>.append()
    text.append(" Saya harap bisa paham");
    cout << "3. Setelah append: " << text << endl;
    cout << "-----------------------------------------" << endl;

    // Mengganti kata menggunakan <namastring>.replace()
    // Mengganti "semua" pada posisi ke 5 sepanjang 5 karakter menjadi "teman-teman"
    text.replace(5, 5, "teman-teman");
    cout << "4. Setelah replace: " << text << endl;
    cout << "-----------------------------------------" << endl;

    // Menambahkan karakter '!' di akhir string menggunakan <namastring>.push_back()
    text.push_back('!');
    cout << "5. Setelah push_back: " << text << endl;
    cout << "-----------------------------------------" << endl;

    // Menghapus karakter terakhir menggunakan <namastring>.pop_back()
    text.pop_back();
    cout << "6. Setelah pop_back: " << text << endl;
    cout << "-----------------------------------------" << endl;

    // Mencari posisi kata menggunakan <namastring>.find()
    size_t posisi = text.find("string");
    if (posisi != string::npos)
    {
        cout << "7. Kata 'string' ditemukan pada posisi: " << posisi << endl;
        cout << "-----------------------------------------" << endl;
    }
    else
    {
        cout << "7. Kata 'string' tidak ditemukan." << endl;
        cout << "-----------------------------------------" << endl;
    }

    // Menghapus semua isi string menggunakan <namastring>.clear()
    text.clear();
    cout << "8. Setelah clear, panjang string: " << text.length() << " karakter" << endl;
    cout << "-----------------------------------------" << endl;
    return 0;
}