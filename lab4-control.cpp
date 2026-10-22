
#include <iostream>
using namespace std;

int main() {

    // Task 1: Check Pass or Fail
    int marks;

    cout << "Task 1: Pass or Fail" << endl;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    cout << endl;

    // Task 2: Check Even or Odd
    int num;

    cout << "Task 2: Even or Odd" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    cout << endl;

    // Task 3: Find the Larger Number
    int a, b;

    cout << "Task 3: Find the Larger Number" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is larger." << endl;
    } else if (b > a) {
        cout << b << " is larger." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    cout << endl;

    // Task 4: Print numbers 1 to 20 using for loop
    cout << "Task 4(a): Using for loop" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << i << " ";
    }

    cout << endl << endl;

    // Task 4(b): Print numbers 1 to 20 using while loop
    cout << "Task 4(b): Using while loop" << endl;

    int i = 1;

    while (i <= 20) {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    // Task 5: Print a star pattern
    cout << "Task 5: Star Pattern" << endl;

    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
