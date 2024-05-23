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
  // Hollow Inverted Half Pyramid Pattern
  cout << "Hollow Inverted Half Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      if (i == 0 || i == 5 - 1 || j == 0 || j == 5 - i - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;
  // Full Pyramid Pattern
  cout << "Full Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Inverted Full Pyramid Pattern
  cout << "Inverted Full Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 4 - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Diamond Pattern
  cout << " Diamond Pattern: ";
  cout << endl;
  for (int i = 0; i < 8 / 2; i++) {
    for (int j = 0; j < 8 / 2 - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 0; i < 8 / 2; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 8 / 2 - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;

  // Hollow Pyramid Pattern
  cout << "Hollow Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || j == i + 1 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;

  // Inverted Hollow Pyramid Pattern
  cout << "Inverted Hollow Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 5 - i; j++) {
      if (j == 0 || j == 5 - i - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;

  // Hollow Diamond Pattern
  cout << "Hollow Diamond Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || j == i + 1 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 5 - i; j++) {
      if (j == 0 || j == 5 - i - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;

  cout << "Flipped Solid Diamond: " << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      cout << "* ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "  ";
    }
    for (int j = 0; j < 5 - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 0; i < 5; i++) {

    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    for (int j = 0; j < 2 * 5 - 2 * i - 1; j++) {
      cout << "  ";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  cout << "New Pattern :" << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i + 1; j++) {
      if (i == 0 || j == i + 1 - 1) {
        cout << i + 1 << " ";
      } else {
        cout << i + 1 << "*";
      }
    }
    cout << endl;
  }
  cout << endl;
  // Hollow Inverted Half Pyramid Pattern
  cout << "Hollow Inverted Half Pyramid Pattern: ";
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
      if (j == 0 || j == 5 - i - 1 || i == 0 || j == 5 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  cout << endl;

  /*
    1
    12
    1_3
    1__4
    12345 */

  cout << "Unique Pattern: " << endl;
  for (int row = 0; row < 5; row++) {
    int count = 0;
    for (int col = 0; col < row + 1; col++) {
      count = count + 1;
      if (col == 0 || row == 4 || col == row) {
        cout << col + 1;
      } else {

        cout << "_";
      }
    }
    cout << endl;
  }
  cout << endl;
  // A
  // ABA
  // ABCBA
  // ABCDCBA
  // ABCDEDCBA
  for (int i = 0; i < 5; i++) {
    char ch;
    for (int j = 0; j < i + 1; j++) {
      int n = j + 1;
      ch = n + 'A' - 1;
      cout << ch;
    }
    for (char alphabet = ch; alphabet > 'A';) {
      alphabet = alphabet - 1;
      cout << alphabet;
    }
    cout << endl;
  }
  cout << endl;

  /* 12345
     2  5
     3 5
     45
     5 */
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i - 1 + 1; j++) {
      if (i == 0) {
        cout << j + 1;
      } else if (j == 0) {
        cout << i + 1;
      } else if (j == 5 - i - 1 + 1 - 1) {
        cout << "5";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  // Flipped Solid Diamond.
  /*       **** ****
   ***   ***
   **     **
   *       *
   *       *
   **     **
   ***   ***
   **** ****     */
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - i; j++) {
      cout << "*";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 4 - i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    for (int j = 0; j < 4 - i - 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < 4 - i; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;

  /*    1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
        16 17 18 19 20 21 */
  cout << "Floyd's triangle : " << endl;
  int count = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < i + 1; j++) {
      count = count + 1;
      cout << count << " ";
    }
    cout << endl;
  }

  return 0;
}