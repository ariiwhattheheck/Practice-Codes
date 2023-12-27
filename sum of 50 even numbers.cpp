//a C++ program that calculates and prints the sum of all even numbers between 1 and 50 using a for loop.
#include <iostream>

using namespace std;

int main()
{
    int i=2;
    int sum=0;

    for (int i=2; i<=50; i+=2)
    {
        sum += i;
    }

    cout << "SUM:" <<sum;
    return 0;
}
