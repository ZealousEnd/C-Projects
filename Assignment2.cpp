#includede <iostream>
#include <iomanip>

using namespace std;

int main() {
    double enteredKilograms;
    double kilogramsToPounds;

    //get input
    cout << "Please enter the amount of kilograms to be converted:";
    cin >> enteredKilograms;

    //conversion
    kilogramsToPounds = (enteredKilograms * 2.2);

    //forcing output to be to 2 decimal places
    cout << fixed << setprecision(2);
    cout << enteredKilograms << " kilogram(s) is " << kilogramsToPounds << " pounds!";
    cout << endl;
    
    return 0;
} 