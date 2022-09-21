#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int std, const char sName[20]) {
  studentId = std;
  strcpy(name, sName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << studentId << endl;
  cout << "Student name: " << name << endl;
}