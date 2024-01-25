#include <iostream>
using namespace std;

int maxNumber (int num1, int num2, int num3);
int minNumber (int num1, int num2, int num3);

int main ()
{
    int num;
    int num1;
    int num2;
    int num3;

    cout << "Enter 3 numbers:";
    cin >> num1>>num2>>num3;

    cout << "Maximum number:" <<maxNumber (num1, num2, num3)<<endl;
    cout << "Minimum number:" <<minNumber (num1, num2, num3)<<endl;


return 0;
}
int maxNumber (int num1, int num2, int num3)
{

    if (num3>num2 && num3>num1)
    {
        return num3;
    }
    else if (num2>num1 && num2>num1)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
int minNumber (int num1, int num2, int num3)
{
        if (num3<num2 && num3<num1)
    {
        return num3;
    }
    else if (num2<num1 && num2<num1)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}

