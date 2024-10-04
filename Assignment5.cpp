#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseDigit(int number);

int main() {
    int number;
    cout << "Please enter the desired number to be reversed: ";
    cin >> number;

    int reversedNumber = reverseDigit(number);
    cout << "The reversed number is: " << reversedNumber << endl;
    return 0;
}

int reverseDigit(int number) {
    bool itsNegative = number < 0;
    string enteredNumber = to_string(number);
    reverse(enteredNumber.begin(), enteredNumber.end());
    int reversedDigit = stoi(enteredNumber);
    if (itsNegative) {
        reversedDigit = -reversedDigit;
    }
    return reversedDigit;
    }