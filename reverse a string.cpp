//3 ways to reverse a string
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    //1.
    string example1="I like bananas.";

    reverse (example1.begin() , example1.end()); //uses algorithm library

    cout << example1 << "\n\n";

    //2. reverses character arrays

    char example2[]="I like books.";

    strrev(example2);

    cout <<example2<< "\n\n";

    //3. using for loop

    string example3="i like uhhh minecraft.";

    for (int i=example3.length()-1; i>=0; i--){
        cout << example3[i];
    }

    return 0;
}
