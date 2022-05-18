#include <iostream>
#include <string>

using namespace std;

int main (){
	string usr_unit = " ";
	float usr_val, F2C, F2K, C2F, C2K, K2C, K2F = 0.0;

	cout << "What is the temperature scale you want to convert? \n F - Fahrenheit\n C - Celcius\n K - Kelvin\n";

	cin >> usr_unit;

	cout << "Ok, and what is the Temperature value?\n";

	cin >> usr_val;

	if (usr_unit == "F"){
		F2C = (usr_val - 32.0) * (5.0 / 9.0);
		F2K = F2C + 273.15;
		cout << usr_val << " Fahrenheit is " << F2C << " Celcius degrees and " << F2K << " Kelvin degrees!\n";
	}
		else if (usr_unit == "C"){
			C2F = (usr_val * 9/5) + 32;
			C2K = usr_val + 273.15;
			cout << usr_val << " Celcius is " << C2F << " Fahrenheit degrees and " << C2K << " Kelvin degrees!\n";
		}		
			else if (usr_unit == "K"){
				K2C = usr_val - 273.15;
				K2F = (K2C * 9/5) + 32;
				cout << usr_val << " Kelvin is " << K2F << " Fahrenheit degrees and " << K2C << " Celcius degrees!\n";
			}
				else if (usr_unit == "f" || usr_unit == "c" || usr_unit == "k"){
					cout << "Units are represented in CAPTALIZED LETTERS. Please run the program again.";
				}
					else {
						cout << "This unit is not supported. Please run the program again.";
					}
	return 0;
}
