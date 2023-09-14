#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char name[30];
    cout << " Please enter your name: " ; cin.get(name, 30,);
    cout << "The name is: " << name << endl;
    cout << "The Number of Characters used in this name is: " << strlen(name);
    cout << "\nThe Lower Case of name is : " <<strlwr(name);
    cout << "\nThe Upper Case of name is : " <<strupr(name);
    cout << "\nThe reverse of name is : " <<strrev(name) ;
    return 0;

}
