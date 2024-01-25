#include <iostream>
using namespace std;

double circumference (double radius);
double area (double radius);

int main ()
{
    int radius;

    cout << "Enter radius:";
    cin >> radius;

    cout << "Circumference:"<<circumference(radius)<<endl;
    cout << "Radius:"<<area(radius)<<endl;

return 0;
}
double circumference (double radius)
{
    cout <<2*3.14*radius;
    return 0;
}
double area (double radius)
{
    cout <<3.14*radius*radius;
    return 0;
}
