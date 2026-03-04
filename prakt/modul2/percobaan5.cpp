#include <iostream>
using namespace std;
int main() {

    int ph;
    cout << "Masukkan pH: ";
    cin >> ph;
    if (ph > 7){
        if (ph < 12) cout << "Alkaline";
        else cout << "Very alkaline";
    }
    else {
        if (ph == 7) cout << "Neutral";
        else if (ph > 2) cout << "Acidic";
        else cout << "Very acidic";
    }
}