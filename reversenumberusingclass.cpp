#include <iostream>
using namespace std;

class ReverseNumber 
    {
        public:
	    int rev(int);
    } ;

int ReverseNumber::rev(int n)
{
	int rem, res = 0;
	while (n != 0)
    {
		rem = n % 10;
		res = (res * 10) + rem;
		n = n / 10;
	}
	return res;
}

// main code
int main()
{
	int num , r;
    cout << "Please enter number you wanted to be reversed : " << endl;
    cin >> num ;

	ReverseNumber rn;
	r = rn.rev(num);

	cout << "Reverse of the number you entered is : " << r;
	return 0;

}
