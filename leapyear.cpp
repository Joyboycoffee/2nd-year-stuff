#include <iostream>
#include <conio.h> // Not used / Deleteable
using namespace std;
// trting to use bool

bool checkYear(int year)
{
	if (year % 400 == 0) {
		return true;
	}

	else if (year % 100 == 0) {
		return false;
	}

	else if (year % 4 == 0) {
		return true;
	}

	else {
		return false;
	}
}

// main code <3
int main()
{
	
    int x, year ;
    cout << "Please enter any Year you want to know is leap or not : " << endl ;
    cin >> x ;
    year=x ;
    
	checkYear(year) ? cout << "Leap Year"
					: cout << "Not a Leap Year";

	return 0;
}
