#include <iostream>
#include <cctype> //not used unnecessary & deleteable 
using namespace std;

int main ()
{
    char x ;
    cout<< "Please enter any charactor : " <<  endl;
    cin >> x;
    
    if ( isdigit(x) )
    cout << "Only Characters are allowed" <<  endl;
    else if  ( x== 'a' || x=='e' || x=='i'|| x=='o' || x=='u'|| x== 'A' || x=='E' || x=='I'|| x=='O' || x=='U' )
    cout << "The character you entered is Vovel" <<  endl;
    else
    cout << "The character you entered is Consonant" << endl;
    return 0;
}