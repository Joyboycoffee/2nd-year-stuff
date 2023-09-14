#include <iostream>

int main()
{
	int n;
    std:: cout <<"Please enter any number : " << std:: endl;
    std:: cin >> n;
	if (n % 2 == 0) 
		std:: cout << "The number is Even" << std:: endl;
	else
		std:: cout << "The number is Odd" << std:: endl;

	return 0;
}
