#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Сравниваем два числа\n\n";
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;

    if (x < y) {
        cout << x << " меньше чем " << y << endl << endl;
	}
	else if (x > y) {
        cout << x << " больше чем " << y << endl << endl;
	}
	else {
        cout << x << " равно " << y << endl << endl;
    }
    
    return 0;
}
