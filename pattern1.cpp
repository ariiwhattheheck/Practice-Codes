/* *
   **
   ***
   ****
   ***** */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;

    for (int r=1; r<=num;r++)
    {
        for (int c=0;c<r;c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
