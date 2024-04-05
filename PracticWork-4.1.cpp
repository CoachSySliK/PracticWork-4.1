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
    cout << "------Проверяем------\n";

    if (x < y) {
        cout << "Наименьшее число: " << x << endl;
	}
	else if (x > y) {
        cout << "Наименьшее число: " << y << endl;
	}
    else {
        cout << "Эти два числа равны\n";
    }
    return 0;
}
