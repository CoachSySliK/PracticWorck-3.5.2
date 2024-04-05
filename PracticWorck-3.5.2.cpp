#include <iostream>

using namespace std;

int main()
{
    cout << "Меняем два значения местами";
    int a = 47;
    int b = 93;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "------\n";
    
    a = a + b; //тут сумма двух значений 47+93=140
    b = a - b; //тут из суммы вычитаем второе значение и получаем первое 140-93=47
    a = a - b; //тут из суммы вычитаем первое значение и кладём туда второе 140-47=93
        
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}

