#include<iostream>
#include<conio.h>

int main ()
{
    int a, b, z;
    std:: cout << "Please enter 2 numbers and press enter respectively: " << std:: endl;
    std:: cin >> a; std:: cin >> b; 

    z= a+b;
    std:: cout << "The sum of numbers "<< a <<"  &  "<< b <<" : " << z << std:: endl;
    return 0;
}