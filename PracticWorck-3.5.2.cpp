#include <iostream>

using namespace std;

int main()
{
    int a = 47;
    int b = 93;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "------\n";
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}

