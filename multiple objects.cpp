#include <iostream>

using namespace std;

class student{
public:
    string name;
    int roll_no;
    int phone_number;
    string address;
    };

int main()
{
    student ObjName1;
    student ObjName2;
    student ObjNum1;
    student ObjNum2;
    student ObjPnum1;
    student ObjPnum2;
    student ObjAddress1;
    student ObjAddress2;

    ObjName1.name="John";
    ObjName2.name="Sam";
    ObjNum1.roll_no=1;
    ObjNum2.roll_no=2;
    ObjPnum1.phone_number=03477703245; //problem
    ObjPnum2.phone_number=03472737625; //problem
    ObjAddress1.address="Lahore Samnabad 123";
    ObjAddress2.address="Karachi DHA 789";

    cout << "Name: " <<ObjName1.name <<endl;
    cout << "Roll no: " <<ObjNum1.roll_no<<endl;
    cout << "Phone Number: " <<ObjPnum1.phone_number<<endl;
    cout << "Address: " <<ObjAddress1.address<<endl;
    cout << "\n\n\n";
    cout << "Name: " <<ObjName2.name<<endl;
    cout << "Roll no: " <<ObjNum2.roll_no<<endl;
    cout << "Phone Number: "<<ObjPnum1.phone_number<<endl;
    cout << "Address: " <<ObjAddress2.address<<endl;
    return 0;
}
