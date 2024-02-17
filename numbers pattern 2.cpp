/* 10 9 8 7
   6 5 4
   3 2
   1 */

#include <iostream>

using namespace std;

int main()
{
    int num=10;

    for (int r=4; r>=1; r--)
    {
        for (int c=r; c>0; c--)
        {
            cout << num << " ";
            num--;
        }
        cout <<endl;
    }
    return 0;
}
