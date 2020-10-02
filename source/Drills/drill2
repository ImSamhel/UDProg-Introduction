#include "std_lib_facilities.h"
int main()
{
	string first_name;
	string friend_name;
	char friend_sex=0;
	int age=0;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Enter a friend's name: ";
	cin >> friend_name;
	cout << "Enter your friend's sex: ";
	cin >> friend_sex;
	cout << "Enter your friend's age: ";
	cin >> age;
	
	if(age < 0 || age > 100)
	simple_error("you're kidding");

	
	cout << "Dear " << first_name << "," << endl << "How are you?" << endl << "I am fine. I miss you." << endl;
	
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
		
	if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
		
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	
	if(age < 12)
	cout << "Next year you will be " << age+1 << "." << endl;
	else if(age == 17)
	cout << "Next year you will be able to vote." << endl;
	else if(age > 70)
	cout << "I hope you are enjoying retirement." << endl;
	else
	cout << endl;
	
	cout << "Yours sincerely," << endl << endl << "Csonka David" << endl;
	
	return 0;
	 
}
