#include <iostream>
using namespace std;

const double PI = 3.14;

void volKubus(int s){
    int vol_kubus = s * s * s;
    cout << "Volume kubus adalah: " << vol_kubus << endl;
}
void volBalok(int p, int l, int t){
    int vol_balok  = p * l * t;
    cout << "Volume balok adalah: " << vol_balok << endl;
}
void volTabung(int r_tab, int t_tab){
    double vol_tabung = PI * r_tab * r_tab * t_tab;
    cout << "Volume tabung adalah: " << vol_tabung << endl;
}
void volKerucut(int r_ker, int t_ker){
    double vol_kerucut =  PI * r_ker * r_ker * t_ker / 3;
    cout << "Volume kerucut adalah: " << vol_kerucut << endl;
}
void display() {
    cout << "Pilih bangun ruang" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Tabung" << endl;
    cout << "4. Kerucut" << endl;
    cout << "Masukkan pilihan (1-4): ";
}
int main(){
    int s, p, l, t, r_tab, r_ker, t_tab, t_ker;
    display();
    int pilihan;
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "Masukkan sisi kubus: ";
            cin >> s;
            volKubus(s);
            break;
        case 2:
            cout << "Masukkan panjang balok: ";
            cin >> p;
            cout << "Masukkan lebar balok: ";
            cin >> l;
            cout << "Masukkan tinggi balok: ";
            cin >> t;
            volBalok(p, l, t);
            break;
        case 3:
            cout << "Masukkan jari-jari tabung: ";
            cin >> r_tab;
            cout << "Masukkan tinggi tabung: ";
            cin >> t_tab;
            volTabung(r_tab, t_tab);
            break;
        case 4:
            cout << "Masukkan jari-jari kerucut: ";
            cin >> r_ker;
            cout << "Masukkan tinggi kerucut: ";
            cin >> t_ker;
            volKerucut(r_ker, t_ker);
            break;
        default:
            cout << "pilihan tidak valid.";
    }
    return 0;
}