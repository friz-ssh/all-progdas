#include <iostream>
using namespace std;

int main() {
    int bil1, bil2;
    cout << "Masukkan bil 1:";
    cin >> bil1;
    cout << "Masukkan bil 2:";
    cin >> bil2;
    if (bil1 == bil2) {
        cout << bil1 << " = " << bil2;
    } else if (bil1 > bil2) {
        cout << bil1 << " > " << bil2;
    } else {
        cout << bil1 << " < " << bil2;
    }
}