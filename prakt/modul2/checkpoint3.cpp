#include <iostream>
using namespace std;

int main(){
    long int income, yearsJob;
    char crime, creditPayment;
    cout << "Income range of applicant? (in thousand dollars): ";
    cin >> income;
    if (income < 30) {
        cout << "Do you have criminal record? [y/n]: ";
        cin >> crime;
        if (crime == 'y' || crime == 'Y')
            cout << "loan\n";
        else if (crime == 'n' || crime == 'N')
            cout << "no loan\n";
        else 
            cout << "invalid input\n";
    }
    else if (income >= 30 && income <= 70) {
        cout << "Years in present job?\n";
        cout << "1. < a year\n2. 1-5 years\n3. > 5 years\n";
        cout << "Enter choice (1-3): ";
        cin >> yearsJob;
        switch (yearsJob) {
            case 1:
                cout << "no loan\n";
                break;
            case 2:
                cout << "Makes credit card payments? [y/n]: ";
                cin >> creditPayment;
                if (creditPayment == 'y' || creditPayment == 'Y')
                    cout << "loan";
                else if (creditPayment == 'n' || creditPayment == 'N')
                    cout << "no loan\n";
                else
                    cout << "invalid input\n";
                break;
            default:
                cout << "invalid input\n";
        }
    }
    else {
        cout << "Criminal record? [y/n]: ";
        cin >> crime;
        if (crime == 'y' || crime == 'Y')
            cout << "no loan\n";
        else if (crime == 'n' || crime == 'N')
            cout << "loan\n";
        else
            cout << "invalid input\n";
    }
    return 0;
}