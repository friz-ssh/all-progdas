#include <iostream>
#include <string>
using namespace std;

const int ARRAY_SIZE = 3;

struct student {
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;
};

struct studentList
{
    student students_array[ARRAY_SIZE];
    int listLength;
};

void readIn(student &student); // function to read student data
void displayStudentInfo(const student &student);
void displayAllStudents(const studentList &sList);

int main()
{
    studentList sList;
    sList.listLength = 0;

    // fill the student array with input from the user
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        readIn(sList.students_array[i]);
        sList.listLength++;
        cout << endl;
    }

    return 0;
}

void readIn(student &student) // function to read student data from input
{
    cout << "Enter first name: ";
    cin >> student.firstName;
    cout << "Enter last name: ";
    cin >> student.lastName;
    cout << "Enter course grade (A-F): ";
    cin >> student.courseGrade;
    cout << "Enter test score: ";
    cin >> student.testScore;
    cout << "Enter programming score: ";
    cin >> student.programmingScore;
    cout << "Enter GPA: ";
    cin >> student.GPA;

    // calculate average score
    int score = (student.testScore + student.programmingScore) / 2;

    if (score >= 90)
        student.courseGrade = 'A';
    else if (score >= 80)
        student.courseGrade = 'B';
    else if (score >= 70)
        student.courseGrade = 'C';
    else if (score >= 60)
        student.courseGrade = 'D';
    else
        student.courseGrade = 'F';
}

void displayStudentInfo(const student &student)
{
    cout << "Name: " << student.firstName << "" << student.lastName << endl;
    cout << "Course Grade: " << student.courseGrade << endl;
    cout << "Test Score: " << student.testScore << endl;
    cout << "Programming Score: " << student.programmingScore << endl;
    cout << "GPA: " << student.GPA << endl;
}

void displayAllStudents(const studentList &sList)
{
    for (int i = 0; i < sList.listLength; i++)
    {
        cout << "Student " << (i + 1) << endl;
        displayStudentInfo(sList.students_array[i]);
        cout << "------------------------" << endl;
    }
}