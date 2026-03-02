#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//the class has 20 students
const int all_students = 20;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// function prototypes
void readStudentData(studentType students[], int size);
void assignGrades(studentType students[], int size);
int findHighest(studentType students[], int size);
void printHeader();
void printAll(studentType students[], int size);
void printFooter(int highestScore);
void printHighest(studentType students[], int size, int highestScore);


// main function
int main() {
    studentType students[all_students];
    readStudentData(students, all_students);
    assignGrades(students, all_students);
    int highestScore = findHighest(students, all_students);
    printHeader();
    printAll(students, all_students);
    printFooter(highestScore);
    printHighest(students, all_students, highestScore);
    
    return 0;
}

// read all student data
void readStudentData(studentType students[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Enter first name for student " << (i + 1) << ": ";
        cin >> students[i].studentFName;
        if(students[i].studentFName == "stop")
            break;
        cout << "Enter last name for student " << (i + 1) << ": ";
        cin >> students[i].studentLName;
        cout << "Enter test score (0-100): ";
        cin >> students[i].testScore;
        while (students[i].testScore < 0 || students[i].testScore > 100) {
            cout << "Invalid test score. Please enter a value between 0 and 100: ";
            cin >> students[i].testScore;
        }
    }
}

// assign grades based on test scores
void assignGrades(studentType students[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (students[i].testScore >= 90)
            students[i].grade = 'A';
        else if (students[i].testScore >= 80)
            students[i].grade = 'B';
        else if (students[i].testScore >= 70)
            students[i].grade = 'C';
        else if (students[i].testScore >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'E';
    }
}

// find the highest test score
int findHighest(studentType students[], int size) {
    int highest = students[0].testScore;
    for (int i = 1; i < size; i++)
    {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }
    return highest;
}

// print header
void printHeader() {
    cout << left << setw(25) << "Name"
         << setw(15) << "Score"
         << setw(6) << "Grade" << endl;
    cout << string(46, '-') << endl;
}

// print all students' data
void printAll(studentType students[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << left << setw(25) << (students[i].studentLName + ", " + students[i].studentFName)
             << setw(15) << students[i].testScore
             << setw(6) << students[i].grade << endl;
    }
}

// print footer
void printTertinggi(int highestScore) {
    cout << "\nHighest test score: " << highestScore << endl;
    cout << "Student(s) with the highest score:" << endl;
}

// print the top scorer
void printHighest(studentType student[], int size, int highestScore) {
    for (int i = 0; i < size; i++)
    {
        if (student[i].testScore == highestScore)
        {
            cout << student[i].studentLName << ", " << student[i].studentFName << endl;
        }
    }
}