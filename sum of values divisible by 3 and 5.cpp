#include <iostream>

using namespace std;

int main()
{
  int num;
  int sum=0;

  cout << "Enter number:";
  cin >> num;

  for (int i=1; i<=num; i++)
  {
      if (i%3==0 && i%5==0)
      {
          cout << i << " is divisible by 5 and 3\n";
          sum=sum + i;
      }
  }
  cout << "Sum:" <<sum <<endl;
    return 0;
}
