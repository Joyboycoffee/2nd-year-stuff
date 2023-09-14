#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b;
    cout << "Please enter any 2 mumbers respectively :" << endl;
    cin >> a >> b ;
    cout <<"a = "<< a << ","<<"b = " << b << endl;
    cout << "a & b = " << ( a & b ) << endl;
    cout << "a | b = " << ( a | b ) << endl;
    cout << "a ^ b = " << ( a ^ b ) << endl;

    return 0;

}