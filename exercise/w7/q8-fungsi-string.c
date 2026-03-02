/* SOAL NOMOR 8 */
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100] = "Halo semua, saya belajar fungsi string di C!";
    printf("Teks: %s\n\n", text);

    // Menghitung ukuran string dalam bytes menggunakan sizeof
    printf("1. Ukuran string dalam bytes: %lu bytes\n", sizeof(text));
    printf("-----------------------------------------\n");

    // Menghitung panjang text menggunakan strlen()
    printf("2. Panjang string: %lu karakter\n", strlen(text));
    printf("-----------------------------------------\n");

    // Menambahkan kata menggunakan strcat()
    strcat(text, " Saya harap bisa paham!");
    printf("3. Setelah strcat: %s\n", text);
    printf("-----------------------------------------\n");

    // Mengganti "semua" menjadi "teman-teman" menggunakan strstr() dan strcpy()
    char *posisi = strstr(text, "semua");
    if (posisi != NULL)
    {
        char temp[100];
        strcpy(temp, posisi + strlen("semua")); // Menyimpan sisa text setelah "semua"
        strcpy(posisi, "teman-teman");          // Mengganti "semua" dengan "teman-teman"
        strcat(text, temp);                     // Tambahkan sisa text kembali
    }
    printf("4. Setelah replace: %s\n", text);
    printf("-----------------------------------------\n");

    // Mencari posisi kata menggunakan strstr()
    posisi = strstr(text, "string");
    if (posisi != NULL)
    {
        printf("5. Kata 'string' ditemukan pada posisi: %ld\n", posisi - text);
        printf("-----------------------------------------\n");
    }
    else
    {
        printf("5. Kata 'string' tidak ditemukan.\n");
        printf("-----------------------------------------\n");
    }

    return 0;
}