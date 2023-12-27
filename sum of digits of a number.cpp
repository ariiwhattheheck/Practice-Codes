#include <iostream>

using namespace std;

int main()
{
   int num;
   int lastDigit;
   int sum=0;

   cout << "Enter a number:";
   cin >> num;

   while (num>0)
   {
       lastDigit=num%10;
       num=num/10;

      sum=lastDigit+sum;
   }
   cout << sum;
    return 0;
}
