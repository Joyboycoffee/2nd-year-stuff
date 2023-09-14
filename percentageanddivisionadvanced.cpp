/* Advanced Code for addition, percentage, division & many more ... ;) */

#include <iostream> //standard io
#include <iomanip> //for setprecision 
using namespace std; //writing std everytime is boring 
int main()

{
    int a, b, c, d, e, f, g; float x, z;

    cout << "\nEnter the number of marks acquired one by one as asked -- \n\n"; 
    
    cout << "English :" <<  endl;  cin >> a; 
    cout << "Hindi :" <<  endl;  cin >> b;
    cout << "Science :" <<  endl;  cin >> c ;
    cout << "Social Science :" <<  endl;  cin >> d;
    cout << "Mathematics :" <<  endl;  cin >> e;
    cout << "Sanskrit :" <<  endl;  cin >> f;
    cout << "Computer Science :" <<  endl;  cin >> g;
    
    x = a+b+c+d+e+f+g ;
    z =x*100/700;
    {
        if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100 || f > 100 || g > 100 )
        cout << "\n\nEnter marks / 100" << endl;
    }

    {

    {
    if ( a < 34)
    cout << "\nYou Failed in English" << endl;
    if ( b < 34)
    cout << "\nYou Failed in Hindi" << endl;
    if ( c < 34)
    cout << "\nYou Failed in Science" << endl;
    if ( d < 34)
    cout << "\nYou Failed in Social Science" << endl;
    if ( e < 34)
    cout << "\nYou Failed in Mathematics" << endl;
    if ( f < 34)
    cout << "\nYou Failed in Sanskrit" << endl;
    if ( g < 34)
    cout << "\nYou Failed in Computer Science" << endl;
    }

    if ( x <=700 )
    cout <<"\nThe total marks are : " << x << endl;
    cout << "The percentage is : " << fixed << setprecision(2) << z <<"%"<<  endl;

    }
    {
    if (z >= 70  &&  x <= 700  )
    cout << "Division : 1st\n" <<  endl;

    else if (z >= 50 && z <= 69 && x <= 700)
    cout << "Division : 2nd\n" <<  endl;

    else if (z >= 30 && z <= 49 && x <= 700) 
    cout << "Division : 3rd\n" <<  endl;

    else if (z < 30 && x <= 700)
    cout << "Failed\n" << endl;
    }
    return 0;
}