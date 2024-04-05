#include <iostream>

using namespace std;

int main()
{

    int a = 93;
    int b = 47;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "------\n";
    cout << "Меняем два значения местами\n";
    cout << "------\n";

    int c;
    c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "------\n";
    cout << "Меняем два значения местами\n";
    cout << "------\n";

    a = a + b; //тут сумма двух значений 47+93=140
    b = a - b; //тут из суммы вычитаем второе значение и получаем первое 140-93=47
    a = a - b; //тут из суммы вычитаем первое значение и кладём туда второе 140-47=93

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "------\n";

    //c отрицательными значениями тоже работает. тогда я не знаю, при каких условиях это не работает.

    int x = -16;
    int y = 0;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "------\n";
    cout << "Меняем два значения местами\n";
    cout << "------\n";

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

