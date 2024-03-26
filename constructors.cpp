#include <iostream>

using namespace std;

class books{
public:
    string title;
    string author;
    int pages;
 books(string x, string y, int z);
private:
    string review;
};

  books::books(string x, string y, int z){
     title=x;
     author=y;
     pages=z;
}

int main()
{
    books booksobj1("The Fault In Our Stars", "John Green", 280);
    books booksobj2("Calculus and Analytical Geometry", "Zoha Tariq", 1011);

    cout << booksobj1.title << " " <<booksobj1.author <<" "<<booksobj1.pages<<endl;
    cout << booksobj2.title << " " <<booksobj2.author << " "<<booksobj2.pages<<endl;
    return 0;
}
