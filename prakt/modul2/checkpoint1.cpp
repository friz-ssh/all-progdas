#include <iostream>
using namespace std;

int main(){
    int total;
    cout << "Masukkan total: ";
    cin >> total;
    if (total >= 95)
        cout << "Outstanding\n";
    else if (total >= 90) 
        cout << "Excellent\n";
    else if (total >= 85)
        cout << "Very satisfying\n";
    else if (total >= 80)
        cout << "Satisfying\n";
    else if (total >= 75)
        cout << "Good\n";
    else
        cout << "Need for improvement\n";
    return 0;
}