//Roman Numeral Converter
//Written By Matthew Rust, 8/22/2024

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string romanNumeral = "A";
    
    
    cout << "Please enter the Roman Numeral you want converted. (in all Caps)\n";
    cin >> romanNumeral;

    int romanSize = romanNumeral.length();

    cout << "The Numeral was: " << romanNumeral.length() << endl;

    
    for (int i = romanNumeral.length() - 1; i >= 0; i--)
    {
        cout << "Letter" << i << ": " << romanNumeral[i] << endl;
    }

    
}

