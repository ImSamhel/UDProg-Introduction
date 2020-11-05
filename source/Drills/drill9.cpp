#include "std_lib_facilities.h"

 struct Date
{
	Date(string m, int d, int y):month(m),day(d),year(y){}
	
	void add_day()
	{
		day++;
	}
	ostream& operator<<(ostream& os, const Date& dt)
	{
    		os << dt.mo << '/' << dt.da << '/' << dt.yr;
    		return os;
	}	
		

	string month;
	
	int day;
	int year;
};


int main()
{
	Date today2("june",25,1978);
	//cout << today2 << endl;
		// . . .
		/*// . . .
		cout << today2 << '\n';
		// . . .
		//init_day(today2,1978,"june",25);
		// . . .
		Date tomorrow2();
		tomorrow2.year = today2.year;
		tomorrow2.month = today2.month;
		tomorrow2.day = today2.day+1;
		//cout << tomorrow2 << '\n';*/
		
	Date today("june",25,1978);
	
	cout << today.day << ", " << today.month << ", " << today.year << endl;	
	
	Date tomorrow(today);
	tomorrow.add_day();
	
	cout << tomorrow.day << ", " << tomorrow.month << ", " << tomorrow.year << endl;	
	
	return 0;
}


