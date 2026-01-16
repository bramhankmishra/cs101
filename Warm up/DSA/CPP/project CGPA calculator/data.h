#ifndef data_h
#define data_h
#include <string>
#include <map>

using namespace std;

// data storage class
class data
{
public:
    // Storing data
    string name;
    int course_num;
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

    // Student data remains protected
protected:
    map<string, char> student_data;
};

// data manipulation class
class manipulateData : public data
{
public:
    //  initializing contructor for base class
    manipulateData()
        : data() {}

    // Setting data in private database
    void setData(string operation_name, string subject, char grade)
    {
        int GP;
        // Give users flexibility of performing different operations on the data
        if (operation_name == "insert")
        {
            student_data.insert({subject, grade});
        }
    }
    // To view data for the student
    map<string, char> getData()
    {
        return student_data;
    }
};

#endif