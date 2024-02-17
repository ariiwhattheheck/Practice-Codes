/* 2
   4 6
   8 10 12
   14 16 18 20 */

#include <iostream>

using namespace std;

int main()
{
    int num=2;

    for (int r=1; r<=4; r++)
    {
        for (int c=1; c<=r; c++)
        {
            cout << num << " ";
            num=num+2;
        }
        cout <<endl;
    }
    return 0;
}
