#include <iostream>
#include <conio.h>
using namespace std;
void swap (int,int);
int main ()
{
    int a, b;
   cout <<"Please enter any two numbers you want to swap: "<< endl;
   cin >> a >> b;
    cout << "The values before swapping is: "<< a << " & " << b << endl;
    swap(a,b);
    cout << "After calling in main a= "<< a <<"b= "<< b << endl;
    return 0;
}    

void swap (int x,int y)
{
    int z;
    z=x;x=y;y=z;
    cout << "In function x= "<< x << "y= "<< y << endl;
}
