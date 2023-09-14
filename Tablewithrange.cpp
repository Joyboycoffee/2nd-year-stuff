#include <iostream>
using namespace std;

int main()
{
	int n, range ;
    cout << "Please enter the number whoose table you wanted : " << endl;
    cin >> n;
    cout << "Enter the range for the table"<< endl;
    cin >> range;
	for (int i = 1; i <= range; ++i)
	cout << n << " * " << i << " = " << n * i << endl;
	return 0;
}


