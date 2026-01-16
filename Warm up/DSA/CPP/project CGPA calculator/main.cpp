// A student's cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator.
// The user's input is used to compute the CGPA, which includes information like the number of courses taken and the grades earned in each one.
// The program also shows each student's overall course grade.
// CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results.
// The program can show the individual grades of each course, calculate total credits and total grade points achieved,
// determine the GPA for the semester, and based on all the data, it can generate and present the CGPA of the student.

#include <iostream>
#include "data.h"

using namespace std;

int main()
{
    string name;
    int course_num;
    string subject;
    char grade;
    manipulateData change;

    cout << "Welcome to CGPA calculator: \n";
    cout << "Enter you name(without space) followed by number of courses in you term, separated by space: ";

    cin >> name >> course_num;
    data student(name, course_num);

    for (int i = 0; i < course_num; i++)
    {
        cout << "Enter you subject name(without space) followed by grade you got, separated by space: ";
        cin >> subject >> grade;
        change.setData("insert", subject, grade);
    }

    cout << "Subject" << "\t" << "Grade" << endl;

    map<string, char> data = change.getData();
    for (auto i = data.begin(); i != data.end(); i++)
    {
        cout << i->first << "\t" << i->second << endl;
    }
    return 0;
}