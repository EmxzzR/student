#include <string>
#include <vector>
using namespace std;

class StudentGrade {

    public:
        StudentGrade(string studentName);
        void addGrade(double grade);
        double calculateAverage() const;
        void printDetails() const;

    private:
        string Name;
        vector<double> grades;

};