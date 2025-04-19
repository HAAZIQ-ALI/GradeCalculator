#include<iostream>
using namespace std;

class Grade {
private:
    // Function to convert marks to CGPA
    float cgpaConvertion(int a, int b, int c, int d, int e) {
        int totalMarks = a + b + c + d + e;
        float cgpa = (float(totalMarks) / 500) * 10;  // CGPA on a scale of 10
        return cgpa;
    }

public:
    // Function to print CGPA
    void cgpa1(int a, int b, int c, int d, int e) {
        float cgpa = cgpaConvertion(a, b, c, d, e);
        cout << "CGPA: " << cgpa << "\n";
    }

    // Function to print percentage
    void percentage(int a, int b, int c, int d, int e) {
        float totalMarks = a + b + c + d + e;  // Sum of marks
        float percentage = (totalMarks / 500) * 100;  // Percentage calculation
        cout << "Percentage: " << percentage << "%\n";
    }
};

int main() {
    Grade g;
    int a, b, c, d, e;

    // Taking input from the user
    cout << "Enter marks for 5 subjects (out of 100 each): ";
    cin >> a >> b >> c >> d >> e;

    // Displaying percentage and CGPA
    g.percentage(a, b, c, d, e);
    g.cgpa1(a, b, c, d, e);

    return 0;
}
