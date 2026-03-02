#include <iostream>
#include <string>
using namespace std;

struct nameType {
    string first;
    string last;
};
struct courseType {
    string name;
    int callNum;
    int credits;
    char grade;
};
struct studentType {
    nameType name;
    double gpa;
    courseType course;
};

int main() {
    studentType student;
    studentType classList[100];
    courseType course;
    nameType name;
    // student.course.callNum = "CSC230";
    // cin >> student.name;
    // classList[0] = name;
    // classList[1].gpa = 3.45;
    // name = classList[15].name;
    // student.name = name;
    // cout << classList[10] << endl;
    // for(int j = 0; j < 100; j++)
    // classList[j].name = name;
    // classList.course.credits = 3;
    // course = studentType.course;
    return 0;
}