#include <iostream>

using namespace std;

int main()
{
    int num;
    int reversed_number = 0;
    int remainder;

    cout << "Enter number:";
    cin >> num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed number: " << reversed_number << endl;

    return 0;
}
