#include <iostream>
using namespace std;

int main ()
{
    int num;
    int foundIndex;
    int help []={11,22,33,44,55,66,77,88,99};

    cout << "Enter the number whose index you want to find:";
    cin >> num;

    foundIndex=-1;

    for (int i=0; i<9; i++)
    {
        if (help[i]==num)
        {
            foundIndex=i;
        }
    }

    if (foundIndex!=-1)
    {
        cout << "The number " <<num << " is found at " <<foundIndex <<endl;
    }
    else
    {
        cout << "The number you entered does not exist in the array" <<endl;
    }

return 0;

}
