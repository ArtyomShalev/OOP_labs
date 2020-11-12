#include <iostream>
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

    cout << "Simple output. Your entered values are:\tinteger -> " << i << "\t float -> " << f << "\t character -> " << c << "\t string -> " << str << endl;

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
