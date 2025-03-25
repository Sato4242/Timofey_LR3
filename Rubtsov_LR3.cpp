#include <iostream>
#include <string>
using namespace std;

bool checkFirstAndLastDigit(int number) {
    string numStr = to_string(number);
    return numStr.front() == numStr.back();
}

int main() {
    setlocale(LC_ALL, "rus");
    string text;
    int choice;
    int maxCount = 0;

    while (true) {
        cout << "Меню:" << endl;
        cout << "1. Ввести натуральное число X" << endl;
        cout << "2. Верно ли, что оно начинается и заканчивается на одну и ту же цифру" << endl;
        cout << "3. Верно ли, что оно заканчивается нечетной цифрой" << endl;
        cout << "4. Выход из программы" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int x;
            cout << "Введите натуральное число x" << endl;
            cin >> x;
            break;
        case 2:
            if (checkFirstAndLastDigit(x)) {
                cout << "Первая и последняя цифры совпадают." << endl;
            }
            else {
                cout << "Первая и последняя цифры не совпадают." << endl;
            }
            break;
        case 3:
            int chetn;
            chetn =x % 10 % 2;
            if (chetn == 0) {
                cout << "Последняя цифра чётная" << endl;
            }
            else {
                cout << "Последняя цифра нечётная" << endl;
            }
            break;
        case 4:
            return 0;
        default:
            cout << "Неверный выбор. Попробуйте снова." << endl;
            break;
        }
    }
}