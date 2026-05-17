#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    vector<int> marks;

public:
    Student(string studentName, vector<int> studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    double calculateAverage() {
        int total = 0;

        for (int mark : marks) {
            total += mark;
        }

        return static_cast<double>(total) / marks.size();
    }

    char calculateGrade() {
        double average = calculateAverage();

        if (average >= 90) return 'A';
        else if (average >= 80) return 'B';
        else if (average >= 70) return 'C';
        else if (average >= 60) return 'D';
        else return 'F';
    }

    void displayResult() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
        cout << "Final Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name;
    int numberOfSubjects;

    cout << "===== Student Grade Management System =====" << endl;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter number of subjects: ";
    cin >> numberOfSubjects;

    vector<int> marks(numberOfSubjects);

    for (int i = 0; i < numberOfSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    Student student(name, marks);
    student.displayResult();

    return 0;
}
