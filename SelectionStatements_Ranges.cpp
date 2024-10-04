#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
	int firstNum;
	int secondNum;
	int iSquared;
	int sumOfAllEvenNumbers = 0;
	int sumOfTheSquareOfOddNumbers = 0;
	bool hasValue = false;


	//get input
	cout << "Please enter the first and second numbers to create a range: " ;
	cin >> firstNum >> secondNum;
		//making sure numbers are in the range format
		if ( firstNum > secondNum) {
			cout << "Please have the first number be less than the second number. Thank you." ;
			return 0;
		}
	hasValue = true;

	//where the magic happens
	while (hasValue) {

		//"odd number output between firstNum and secondNum"
		cout << "All odd numbers within your range: " ;
		for (int i = firstNum; i <= secondNum; ++i) {
			if ( i % 2 ==1) {
				cout << i << " " ;
			}
		}
		cout << endl; 

		//sum of all even numbers output
		for (int i = firstNum; i <= secondNum; ++i) {
			if ( i % 2 == 0) {
				sumOfAllEvenNumbers += i;
			}
		}
		cout << "The sum of all even numbers is: " << sumOfAllEvenNumbers << " " << endl;


		// output 1-10 and its squared value
		cout << "Here are numbers 1-10 and their squared values: " << endl;
		for (int i = 1; i <= 10; ++i) {
			cout << i << " " << i * i << endl;
		}

		// output the sum of the squares of the odd numbers 
		cout << "Here is the sum of the square of the odd numbers within the range: ";
		for (int i = firstNum; i <= secondNum; ++i) {
			if ( i % 2 == 1) {
				iSquared = i * i;
				sumOfTheSquareOfOddNumbers += iSquared;

			}
		}
		cout << sumOfTheSquareOfOddNumbers << endl;


		//output uppercase letters
		cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;


		//ends program when after magic happens
		return 0;
	}
		
	//ends program even if there is no value (?)
	return 0;
}

