/* 1
   2 3
   4 5 6
   7 8 9 10 */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;

    for (int r=1; r<=4; r++)
    {
        for (int c=1; c<=r; c++)
        {
            cout << num << " ";
            num++;
        }
        cout <<endl;
    }
    return 0;
}
