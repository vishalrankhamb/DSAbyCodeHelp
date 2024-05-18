#include <iostream>
using namespace std;

int main() {

  // Square Pattern
  cout << "Square Pattern: ";
  cout << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;

  // Rectangle Pattern
  cout << "Rectangle Pattern: ";
  cout << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Hollow Rectangle Pattern
  cout << "Hollow Rectangle Pattern: ";
  cout << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == 0 || i == 3 - 1 || j == 0 || j == 5 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;
  // Hollow Square Pattern
  cout << "Hollow Square Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == 0 || i == 5 - 1 || j == 0 || j == 5 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;
  // Half Pyramid Pattern
  cout << "Half Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Inverted Half Pyramid Pattern
  cout << "Inverted Half Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Half Numeric Pyramid Pattern
  cout << "Half Numeric Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;
  // Inverted Numeric Half Pyramid Pattern
  cout << "Inverted Half Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}