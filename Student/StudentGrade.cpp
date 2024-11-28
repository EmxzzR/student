#include "StudentGrade.h"
#include <iostream>
#include <iomanip>
#include <numeric>
using namespace std;

StudentGrade::StudentGrade(string studentName){
    Name = studentName;
}

void StudentGrade::addGrade(double grade) {
    grades.push_back(grade);
}

double StudentGrade::calculateAverage() const {
    if (grades.empty()) {
        return 0.0;
    }
    double sum = accumulate(grades.begin(), grades.end(), 0.0);
    return sum / grades.size();
}

void StudentGrade::printDetails() const {
    double average = calculateAverage();
    cout << "Student Name: " << Name
         << ", Average Grade: " << fixed << setprecision(2) << average
         << endl;
}
