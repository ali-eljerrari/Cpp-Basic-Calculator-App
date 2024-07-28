#include <iostream>
using namespace std;

void calculateAddition(int number1, int number2);
void calculateSubtraction(int number1, int number2);
void calculateMultiplication(int number1, int number2);
void calculateDevision(int number1, int number2);

int main()
{
	int number1 = 2;
	int number2 = 12;
	calculateAddition(number1, number2);
	calculateSubtraction(number1, number2);
	calculateMultiplication(number1, number2);
	calculateDevision(number1, number2);
}

void calculateAddition(int number1, int number2) {
	if (!number1 && !number2)
	{
		cout << "Please provide two numbers for calculation!"<<endl;
	}

	cout << "The result of adding " << number1 << " to " << number2 << " is " << number1 + number2 << endl;
}

void calculateSubtraction(int number1, int number2) {
	if (!number1 && !number2)
	{
		cout << "Please provide two numbers for calculation!" << endl;
	}
	
	cout << "The result of subtracting " << number2 << " from " << number1 << " is " << number1 - number2 << endl;
}

void calculateMultiplication(int number1, int number2) {
	if (!number1 && !number2)
	{
		cout << "Please provide two numbers for calculation!" << endl;
	}

	cout << "The result of multiplying " << number1 << " to " << number2 << " is " << number1 * number2 << endl;
}

void calculateDevision(int number1, int number2) {
	if (!number1 || !number2)
	{
		cout << "Please provide two numbers for calculating division!!! ";
		cout << "Number 2 should not equal to 0" << endl;
		return;
	}

	float result = static_cast<float>(number1) / number2;

	cout << "The result of dividing " << number1 << " on " << number2 << " is " << result << endl;
}