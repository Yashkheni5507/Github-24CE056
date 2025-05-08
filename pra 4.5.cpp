#include<iostream>
using namespace std;

class Student {
protected:
    int marks;
public:
    void getmarks(int m) {
        marks = m;
    }
    virtual void ComputeGrade() = 0;  // Pure virtual function
    virtual void display() = 0;       // Added display method as a pure virtual function
};

class UnderGraduate : public Student {
public:
    UnderGraduate(int m) {
        marks = m;
    }
    void ComputeGrade() override {
        if (marks > 0 && marks < 28)
            cout << "F";
        else if (marks >= 29 && marks <= 50)
            cout << "C";
        else if (marks > 50 && marks <= 70)
            cout << "B";
        else if (marks > 70 && marks <= 90)
            cout << "A";
        else if (marks > 90 && marks <= 100)
            cout << "A++";
    }
    void display() override {
        cout << "Undergraduate Student Marks: " << marks << endl;
    }
};

class PostGraduate : public Student {
public:
    PostGraduate(int m) {
        marks = m;
    }
    void ComputeGrade() override {
        if (marks > 0 && marks < 28)
            cout << "F";
        else if (marks >= 29 && marks <= 50)
            cout << "C";
        else if (marks > 50 && marks <= 70)
            cout << "B";
        else if (marks > 70 && marks <= 90)
            cout << "A";
        else if (marks > 90 && marks <= 100)
            cout << "A++";
    }
    void display() override {
        cout << "Postgraduate Student Marks: " << marks << endl;
    }
};

int main() {
    PostGraduate ob(91);
    ob.display();
    cout << " Grade: ";
    ob.ComputeGrade();
    cout << endl;

    UnderGraduate OB(28);
    OB.display();
    cout << " Grade: ";
    OB.ComputeGrade();
    cout << endl;

    return 0;
}


