// Omar Vergara
// 02/17/2024
// Programming Assignment 1

#include <iostream>    
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    // Constant
    const double NUM_ASSIGNMENTS = 3;

    // Variables
    string studentName;
    string assignmentNames[3];
    int grades[3];
    double averageGrade;


    // Get student name
    cout << "Enter student first and last name: ";
    getline(cin, studentName);
    cout << endl;

    // Get assignment names
    cout << "Enter the name of assignment 1: ";
    getline(cin, assignmentNames[0]);
    cout << "Enter the name of assignment 2: ";
    getline(cin, assignmentNames[1]);
    cout << "Enter the name of assignment 3: ";
    getline(cin, assignmentNames[2]);
    cout << endl;

    // Get grades for each assignment
    cout << "Enter the grade for " << assignmentNames[0] << ": ";
    cin >> grades[0];
    cout << "Enter the grade for " << assignmentNames[1] << ": ";
    cin >> grades[1];
    cout << "Enter the grade for " << assignmentNames[2] << ": ";
    cin >> grades[2];
    cout << endl;


    // Average grade
    averageGrade = (grades[0] + grades[1] + grades[2]) / NUM_ASSIGNMENTS;

    // Student name and average grade
    cout << showpoint << setprecision(1) << fixed;
    cout << "The average for " << studentName << " is " << averageGrade << endl;
    cout << endl;

    // Display assignments and grades
    cout << "Here are your grades: " << endl;
    cout << setw(30) << right << assignmentNames[0] << ":";
    cout << setw(5) << right << grades[0] << endl;
    cout << setw(30) << right << assignmentNames[1] << ":";
    cout << setw(5) << right << grades[1] << endl;
    cout << setw(30) << right << assignmentNames[2] << ":";
    cout << setw(5) << right << grades[2] << endl << endl;
    cout << "Thank you for playing." << endl;


}