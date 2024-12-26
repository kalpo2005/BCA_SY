#include <iostream>
using namespace std;

class Temp
{
	public:
		int choice;
		float tapman, num;

		// Constructor to initialize num
		Temp(float n)
		{
			num = n;
			tapman = 0;  // Initialize tapman to 0
		}

		// Copy constructor
		Temp(Temp &copy)
		{
			num = copy.num;
			tapman = 0;  // Ensure tapman is reset to 0
			cout << "num is = " << num << endl;  // Output the initial num
		}

		// Method to choose conversion type
		void choose()
		{
			cout << "Select your choice: " << endl;
			cout << "1. Fahrenheit to Celsius" << endl;
			cout << "2. Celsius to Fahrenheit" << endl;
			cout << "Enter your choice: ";
			cin >> choice;
		}

		// Method to display conversion result
		void display()
		{
			cout << "Conversion result: " << tapman << endl;
		}

		// Convert Fahrenheit to Celsius
		void fToc()
		{
			tapman = (num - 32) * (5.0f / 9.0f);  // Use floating-point division
		}

		// Convert Celsius to Fahrenheit
		void cTof()
		{
			tapman = (num * (9.0f / 5.0f)) + 32;  // Use floating-point division
		}
};

int main()
{
	float value;

	cout << "Enter a temperature value: ";
	cin >> value;

	// Create Temp object with value
	Temp t(value);

	// Create a copy of the Temp object
	Temp t2(t);

	// Get user's choice for conversion
	t2.choose();

	// Perform the conversion based on the user's choice
	switch (t2.choice)
	{
		case 1:
			t2.fToc();
			t2.display();
			break;

		case 2:
			t2.cTof();
			t2.display();
			break;

		default:
			cout << endl << "Invalid choice!" << endl;
			break;
	}

	return 0;
}
