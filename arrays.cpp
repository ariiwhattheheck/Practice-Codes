#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum;
    int average;
    int square;
    char choice;
    int ahmawd [10];

    for (int b=0; b<10; b++)
    {
        cout << "Enter Element " <<b << " : ";
        cin >> ahmawd[b];
    }
    cout << "\n\n";
    cout << "1. Display Elements" <<endl;
    cout << "2. Sum of Elements" <<endl;
    cout << "3. Average of Elements" <<endl;
    cout << "4. Maximum and Minimum Element" << endl;
    cout << "5. Square of Elements:" <<endl;
    cin >> choice;

    switch (choice)
    {
    case '1':
        system("cls");
        for (int i=0; i<10; i++)
    {
        cout << "Element " <<i << " is: " <<ahmawd[i] <<endl;
    }

    break;

    case '2':
        system("cls");
        for (int j=0; j<10; j++)
    {
        sum=sum+ahmawd[j];
    }
    cout << "Sum is: " <<sum <<endl;
    break;

    case '5':
        system("cls");
        for (int j=0; j<10; j++)
    {
        square=ahmawd[j]*ahmawd[j];
        cout << "Square of " <<ahmawd[j] << " element is: " << square <<endl;;
    }
    break;

    case '3':
        system("cls");
           for (int j=0; j<10; j++)
    {
        sum=sum+ahmawd[j];
    }
  average=sum/10;
     cout << "Average is: " <<average <<endl;
     break;

     case '4':
         system("cls");
     int maxNum= ahmawd [0];
     int minNum= ahmawd [0];

    for (int a=0; a<10; a++)
    {
        if (ahmawd[a]>maxNum)
        {
            maxNum=ahmawd[a];
        }
        if (ahmawd[a]<minNum)
        {
            minNum=ahmawd[a];
        }
    }

    cout << "Maximum number in array: "<<maxNum <<endl;
    cout << "Minimum number in array: "<<minNum <<endl;
    break;
    }

    return 0;
}
