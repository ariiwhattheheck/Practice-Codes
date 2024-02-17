/* *****
    ****
     ***
      **
       * */


#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;

    for (int r=num; r>=1;r--)
    {
        for (int i=num-r; i>0; i--)
            cout << " ";
        for (int c=r;c>0;c--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
