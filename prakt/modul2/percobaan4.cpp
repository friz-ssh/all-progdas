#include <iostream>
#include <string>
using namespace std;

int main(){
    int pulseRate, restHeartRate;
    cout << "Take your resting pulse for 10 seconds." << endl;
    cout << "Enter your pulse rate and press return: ";
    cin >> pulseRate;
    restHeartRate = pulseRate * 6;
    cout << "Your resting heart rate is " << restHeartRate << endl;
    if (restHeartRate > 60) {
        if (restHeartRate > 100) {
            cout << "Your heart is in extreme condition";
        } else {
            cout << "Keep up your exercise program!";
        }
    } else if (restHeartRate > 40) {
        cout << "Your heart is in excellent health!";
    } else {
        cout << "Your heart is in extreme condition";
    }
    return 0;
}