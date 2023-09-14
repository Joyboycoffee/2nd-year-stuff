#include <iostream>
#include <cctype>
int main()

{
    int x, z;

    std:: cout << "Enter the number of marks acquired :" << std:: endl; std:: cin >> x; 
    z =x*100/700;

    if (x > 700)
    std:: cout << "Please enter Markes / 700" << std:: endl;
    
    else if ( x <=700 )
    std:: cout << "The percentage is : " << z <<"%"<< std:: endl;




    if (z >= 70  &&  x <= 700  )
    std:: cout << "1st Division" << std:: endl;

    else if (z >= 50 && z <= 69 && x <= 700)
    std:: cout << "2nd Division" << std:: endl;

    else if (z >= 30 && z <= 49 && x <= 700) 
    std:: cout << "3rd Division" << std:: endl;

    else if (z < 30 && x <= 700)
    std::cout << "Fail" << std::endl;

    return 0;
}