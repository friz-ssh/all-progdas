#include <iostream>
using namespace std;
// Program untuk menunjukkan deret Fibonacci dan menghitung jumlahnya

int main()
{
    cout << "PROGRAM UNTUK MENCETAK DERET FIBONACCI" << endl;
    cout << "--------------------------------------" << endl;
    long long n;
    cout << "Masukkan jumlah suku Fibonacci: "; // Memasukkan jumlah suku Fibonacci yang diinginkan
    cin >> n;

    long long f1 = 1, f2 = 1, nextFib = 0; // f1 adalah suku pertama, f2 adalah suku kedua
    long long sum = 0;                     // Menyimpan hasil penjumlahan suku-suku Fibonacci

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) // Perulangan untuk menghasilkan suku-suku Fibonacci
    {
        if (i == 1) // Menampilkan suku pertama
        {
            cout << f1 << ", ";
            continue;
        }
        if (i == 2) // Menampilkan suku kedua
        {
            cout << f2 << ", ";
            continue;
        }
        // Menghitung suku berikutnya
        nextFib = f1 + f2;
        f1 = f2;
        f2 = nextFib;
        cout << nextFib << ", ";
    }

    cout << "\nHasil Penjumlahan: ";
    f1 = 1, f2 = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            sum += f1;
            continue;
        }
        if (i == 2)
        {
            sum += f2;
            continue;
        }
        nextFib = f1 + f2;
        f1 = f2;
        f2 = nextFib;

        sum += nextFib;
    }
    cout << sum << endl; // Menampilkan hasil penjumlahan suku-suku Fibonacci
    return 0;
}

// Muhammad Affriza Ayman Nashmi
// 25/559828/TK/63201
// Teknologi Informasi - B
