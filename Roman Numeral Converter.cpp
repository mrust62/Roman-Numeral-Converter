//Roman Numeral Converter
//Written By Matthew Rust, 8/22/2024

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string romanNumeral = "A";
	string romanTemp;
	int convertedValue = 0;
	bool runAgain = true;
	while (runAgain)
	{
		cout << "Please enter the Roman Numeral you want converted. (in all Caps)\n";
		cin >> romanNumeral;

		for (int i = romanNumeral.length() - 1; i >= 0; i--)
		{

			romanTemp = romanNumeral[i];

			if (romanTemp.compare("I") == 0)
			{
				convertedValue += 1;

			}
			else if (romanTemp.compare("V") == 0)
			{
				if (i == 0)
				{
					convertedValue += 5;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("I") == 0)
					{
						convertedValue += 4;
						i--;
					}
					else
					{
						convertedValue += 5;
					}
				}
			}
			else if (romanTemp.compare("X") == 0)
			{
				if (i == 0)
				{
					convertedValue += 10;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("I") == 0)
					{
						convertedValue += 9;
						i--;
					}
					else
					{
						convertedValue += 10;
					}
				}
			}
			else if (romanTemp.compare("L") == 0)
			{
				if (i == 0)
				{
					convertedValue += 50;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("X") == 0)
					{
						convertedValue += 40;
						i--;
					}
					else if (romanTemp.compare("I") == 0 || romanTemp.compare("V") == 0)
					{
						cout << "INVALID NUMERAL";
						return 0;
					}
					else
					{
						convertedValue += 50;
					}
				}
			}
			else if (romanTemp.compare("C") == 0)
			{
				if (i == 0)
				{
					convertedValue += 100;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("X") == 0)
					{
						convertedValue += 90;
						i--;
					}
					else if (romanTemp.compare("I") == 0 || romanTemp.compare("V") == 0)
					{
						cout << "INVALID NUMERAL";
						return 0;
					}
					else
					{
						convertedValue += 100;
					}
				}
			}
			else if (romanTemp.compare("D") == 0)
			{
				if (i == 0)
				{
					convertedValue += 500;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("C") == 0)
					{
						convertedValue += 400;
						i--;
					}
					else if (romanTemp.compare("I") == 0 || romanTemp.compare("V") == 0 || romanTemp.compare("X") == 0)
					{
						cout << "INVALID NUMERAL";
						return 0;
					}
					else
					{
						convertedValue += 500;
					}
				}
			}
			else if (romanTemp.compare("M") == 0)
			{
				if (i == 0)
				{
					convertedValue += 1000;
				}
				else
				{
					romanTemp = romanNumeral[i - 1];
					if (romanTemp.compare("C") == 0)
					{
						convertedValue += 900;
						i--;
					}
					else if (romanTemp.compare("I") == 0 || romanTemp.compare("V") == 0 || romanTemp.compare("X") == 0)
					{
						cout << "INVALID NUMERAL";
						return 0;
					}
					else
					{
						convertedValue += 1000;

					}
				}
			}
			else
			{
				cout << "INVALID NUMERAL";
				return 0;
			}
		}
		cout << convertedValue << endl;

		cout << "Would you like to convert another numeral? (y/n)" << endl;
		string input;
		cin >> input;

		if (input == "n")
		{
			runAgain = false;
			cout << "Goodbye";
		}
		else if (input == "y")
		{
			runAgain = true;
			convertedValue = 0;
		}
		else
		{
			runAgain = false;
			cout << "Invalid response. Exiting program." << endl;
			
		}

	}
}

