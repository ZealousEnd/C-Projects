#include <iostream>
#include <string>

using namespace std;

int main() {
    string enteredString; 
    string noVowelString;
    int numOfCharacters;

    cout << "Please enter the desired string: ";
    cin >> enteredString;

    enteredString.length() << numOfCharacters;
    char arrayOfCharacters[numOfCharacters];

    for (char c : enteredString) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            noVowelString += c;
        }
    }

    cout << "The string without vowels is: " << noVowelString << endl;
    return 0;

}
