#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

void task1() {
    double x;
    cout << "Введите x: ";
    cin >> x;

    if (x < 0) {
        cout << "x не принадлежит области определения функции." << endl;
        return;
    }

    if (fabs(sin(x)) < 1e-9) {
        cout << "x не принадлежит области определения функции." << endl;
        return;
    }

    double sqrt_part = sqrt(exp(2 * x) - 1);
    double rational_part = (x * x - 7 * x + 1) / sin(x);
    double y = sqrt_part + rational_part;

    cout << "Значение функции y: " << y << endl;
}

void task2() {
    int x = 3;
    long long sum = 0;

    for (int n = 2; n <= 50; ++n) {
        int term_multiplier = n + 4;
        int exponent = n - 2;
        long long term = term_multiplier * pow(x, exponent);
        sum += term;
    }

    cout << "Сумма ряда при x = 3: " << sum << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice;

    while (true) {
        cout << "1 — Вычисление функции y" << endl;
        cout << "2 — Сумма ряда" << endl;
        cout << "0 — Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 0:
            cout << "Выход из программы" << endl;
            return 0;
        default:
            cout << "Неверный выбор" << endl;
        }

        system("pause");
    }
}
