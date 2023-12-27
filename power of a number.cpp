#include <iostream>
#include <cmath> //added cuz i'm using power function
using namespace std;

int main()
{
   int num;

   cout << "Enter a number:";
   cin >> num;

   cout<< "Answer:" <<pow(num,2); //in the bracket, first value is the number, second value is the power
    return 0;
}
