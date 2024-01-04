#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    string name;
    double grade;
};

int main()
{
    vector<Student> students;
    int numStudents;

    cout << "\nEnter no. of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++)
    {
        Student student;
        cout << "\nEnter the name of student " << i + 1 << ": ";
        cin >> student.name;

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> student.grade;

        students.push_back(student);
    }

    double sum_grades = 0.0;
    for (const auto &student : students)
    {
        sum_grades += student.grade;
    }
    double avg_grade = sum_grades / numStudents;

    double highest_grade = students[0].grade;
    double lowest_grade = students[0].grade;

    for (const auto &student : students)
    {
        highest_grade = max(highest_grade, student.grade);
        lowest_grade = min(lowest_grade, student.grade);
    }

    cout << "------------------------------------" << endl;
    cout << "\nStudent Grades Summary:\n";
    for (const auto &student : students)
    {
        cout << student.name << ": " << student.grade << endl;
    }

    cout << "\nAverage Grade: " << avg_grade << endl;
    cout << "Highest Grade: " << highest_grade << endl;
    cout << "Lowest Grade: " << lowest_grade << endl;

    cout << "------------------------------------" << endl;

    return 0;
}