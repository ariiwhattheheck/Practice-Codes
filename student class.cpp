#include <iostream>

using namespace std;

class student{
public:
    string name;
    int roll_no;
    };

int main()
{
    student ObjName;
    student ObjNum;

    ObjName.name="John";
    ObjNum.roll_no=2;

    cout << "Name: " <<ObjName.name <<endl;
    cout << "Roll no: " <<ObjNum.roll_no;
    return 0;
}
