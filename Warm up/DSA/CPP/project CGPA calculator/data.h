#ifndef data_h
#define data_h
#include <string>
#include <iostream>
#include <map>

using namespace std;

// data storage class
class data
{
public:
    // Storing data
    string name;
    int course_num;
    int totalCP = 0;
    float totalGPandCP = 0;
    // char grades;

    // Default contructor
    data() {}
    // Constructing data on initialisation
    data(string name, int course_num)
    {
        this->name = name;
        this->course_num = course_num;
        // grades = grades;
    }

    map<string, int> grade_gp_reference = {
        {"O", 10},
        {"A+", 9},
        {"A", 8},
        {"B+", 7},
        {"B", 6},
        {"C+", 5},
        {"C", 4}};

    map<string, int> credit_reference = {
        {"English", 5},
        {"Math", 8},
        {"CSE", 10},
        {"SST", 5},
        {"Physicaledu", 5},
        {"C++", 8},
        {"DSA", 5}};

    // Student data remains protected
protected:
    map<string, string> student_data;
    map<char, int> grade_gp;
};

// data manipulation class
class manipulateData : public data
{
public:
    //  initializing contructor for base class
    manipulateData()
        : data() {}

    // Setting data in private database
    void setData(string operation_name, string subject, string grade)
    {
        int GP;
        // Give users flexibility of performing different operations on the data
        if (operation_name == "insert")
        {
            student_data.insert({subject, grade});
            // grade_gp.insert({});
        }
    }
    // To view data for the student
    map<string, string> getData()
    {
        return student_data;
    }

    void getCGPA()
    {
        for (auto i = student_data.begin(); i != student_data.end(); i++)
        {
            totalCP += credit_reference[i->first];
            totalGPandCP += grade_gp_reference[i->second] * credit_reference[i->first];
        }
        cout << "Your CGPA is: " << totalGPandCP / totalCP;
    }
};

#endif