#include "std_lib_facilities.h"
int main()
{
	double number1 = 0;
	double number2 = 0;
	double number = 0;
	double length = 0;
	string unit;
	double sum = 0;
	bool min_check = true;
	double min_value = 0;
	double max_value = 0;
	vector<double>numbers;
	
	while(cin >> number >> unit)
	{
		if(unit == "inch")
		{
		length = ((number * 2.54) / 100);
		numbers.push_back(length);
		sum += length;
		}
		else if(unit == "cm")
		{
		length = number / 100;
		numbers.push_back(length);
		sum += length;
		}
		else if(unit == "ft")
		{
		length = ((number * 12 * 2.54) /100);
		numbers.push_back(length);
		sum += length;
		}
		else if(unit == "m")
		{
		length = number;
		numbers.push_back(length);
		sum += length;
		}
		else
		{
		cout << "Error. Illegal unit detected." << endl;
		}
		
		if(min_check)
		{
			min_value = length;
			min_check = false;
		}
		
		if(length < min_value)
			min_value = length;
		if(length > max_value)
			max_value = length;
		
		
		
			
		}
			
		cout << "smallest value: " << min_value << endl << "largest value: " << max_value << endl << "number of values: " << numbers.size() << endl << "sum of values: " << sum << endl;
		
		sort(numbers);
		
		for(double length : numbers)
			cout << length << "\t"; 
		
	
	
	
		
	
	
	
		return 0;
	
	}
	
	/*
	
	while(cin >> number1 >> number2)
	{
		if(number1 < number2)
		cout << "the smaller value is: " << number1 << endl << "the larger value is: " << number2 << endl;
		else if(number2 < number1)
		cout << "the smaller value is: " << number2 << endl << "the larger value is: " << number1 << endl;
		
		if(number1 == number2)
		cout << "the numbers are equal" << endl;
		else if(abs(number1 - number2) <= (1.0/100))
		cout << "the numbers are almost equal" << endl;
	}
	
		return 0;
	
	}

*/
	

