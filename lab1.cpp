#include <iostream>
#include <iomanip>;
using namespace std;

int main() {
    int regime;
    int i;
    float f;
    char c;
    char str[100];

    cout << "Input the integer value\n";
    cin >> i;
    cout << "Input the float value\n";
    cin >> f;
    cout << "Input the character\n";
    cin >> c;
    cout << "Input the string\n";
    cin.ignore();
    cin.getline(str, 100);

    cout << "Simple output: Your entered values are:\tinteger -> " << i << "\t float -> " << f << "\t character -> " << c << "\t string -> " << str << endl;
    cout << "Format output: " << endl
    << setw(12) << "Variable name " << setw(100) << "Value " << endl
    << setw(12) << "Integer " << setw(100) << i << endl
    << setw(12) << "Float " << setw(100) << f << endl
    << setw(12) << "Character " << setw(100) << c << endl
    << setw(12) << "String " << setw(100) << str << endl;

    cout << "Choose the regime: 1 - write entered values to file; 2 - read previous values from file\n";
    cin >> regime;
    if (regime == 1) {
        cout << "The values have written to [filename]" << endl;
    } else if (regime == 2) {
        cout << "The values from the previous session have read from the [filename]" << endl;
    } else {
        cout << "ERROR! Incorrect regime";
    }


    return 0;
}
