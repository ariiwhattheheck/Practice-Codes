#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book
{
private:
    string name;
    string code;
public:
    Book()
    {
        name="";
        code="";
    }
    Book(string n, string c)
    {
        name=n;
        code=c;
    }
    void setName(string n)
    {
        name=n;
    }
    void setCode (string c)
    {
        code=c;
    }
    string getName()
    {
        return name;
    }
    string getCode()
    {
        return code;
    }
    void displayInfo()
    {
        cout << "Book Name: " <<name<<endl;
        cout << "Book Code: " <<code <<endl;
    }
};

int main()
{
    int numofRecords=2;
    Book book[numofRecords];
    string name, code;

    ofstream file ("books.txt", ios::out);

    cout << "File Output: \n" <<endl;

    for (int i=0; i<numofRecords; i++)
    {
    cout << "Enter name: ";
    getline (cin, name);
    file << "Name: "<<name <<endl;
    book[i].setName(name);

    cout << "Enter code: ";
    getline (cin, code);
    file << "Code: " <<code <<endl;
    book[i].setCode(code);
    }

    file.close();

    cout << "\nFile Data: \n\n";
    ifstream file1("books.txt", ios::in);
    string line;
    while (getline (file1, line))
    {
        cout << line <<endl;
    }
    file1.close();
    return 0;
}
