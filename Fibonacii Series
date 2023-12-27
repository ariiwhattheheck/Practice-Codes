#include <iostream>

using namespace std;

int main()
{
  int t1=0;
  int t2=1;
  int num;
  int nextTerm;

  cout << "Enter number:";
  cin >> num;

  for (int i=1; i<=num; i++)
  {
      if (i==1)
      {
          cout << t1 << ",";
      }
      else if (i==2)
      {
          cout << t2 << ",";
      }
      else
      {
          nextTerm=t1+t2;
          t1=t2;
          t2=nextTerm;
          cout << nextTerm << ",";
      }
  }

    return 0;
}
