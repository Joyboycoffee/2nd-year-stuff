#include <iostream>
#include <conio.h>

int main ()
{
   int a, b, c, z;
   std:: cout << "Please enter 3 Numbers respectively := "<< std:: endl;
   std:: cin >> a >> b >> c ;
   if (a >= b)
   {
   
    if (a >= c)
    std:: cout << "The largest among these three is := " << a << std:: endl;

   else
    std:: cout << "The largest among these theree is := " << c << std:: endl;
   }

   else
   {
    if ( b >= c)
    std:: cout << "The largest among these three is := " << b << std:: endl;
    else 
    std:: cout << "The largest among these three is := " << c << std:: endl;
   }

return 0 ;
}