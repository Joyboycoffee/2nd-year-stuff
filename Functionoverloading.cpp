#include <iostream>
#include <math.h>
using namespace std;

void area(int);
void area(int,int);
void area(int,int,int);

int main()
{
    int a=50, b=40, c=45;


    area (a);
    area (a,b);
    area (a,b,c);
    return 0;
}

void area (int a)
{
    cout << "The Area of square is: "<< a*a <<endl;
};

void area (int a, int b)
{
    cout << "The Area of Rectangle is: "<< a*b << endl;
};

void area (int a,int b, int c)

{
    float s = (a+b+c) / 2;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "The Area of Triangle is: " << ar <<endl ;
};
