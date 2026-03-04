#include <iostream>
using namespace std;

int main() {
    int x, y, temp;
    int *a, *b;
    
    cout << "Angka 1: ";
    cin >> x;
    cout << "Angka 2: ";
    cin >> y;

    if (x<y) {
        a = &x;
        b = &y;
        
        temp = *a;
        *a = *b;
        *b = temp;
    } else {
        cout << "Tidak terjadi pertukaran angka";
    }
    
    cout << "Angka 1 setelah swap: " << x << endl;
    cout << "Angka 2 setelah swap: " << y;
}