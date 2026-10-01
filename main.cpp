#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;
    double a, b, result;

    // цикл do...while: меню повторяется, пока пользователь не введет 9
    do
    {
        cout << endl;
        cout << "===== КАЛЬКУЛЯТОР =====" << endl;
        cout << "1. Сложить 2 числа" << endl;
        cout << "2. Вычесть первое из второго" << endl;
        cout << "3. Перемножить два числа" << endl;
        cout << "4. Разделить первое на второе" << endl;
        cout << "5. Возвести первое число в степень N" << endl;
        cout << "6. Найти квадратный корень из числа" << endl;
        cout << "7. Найти 1 процент от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Введите номер операции: ";
        cin >> choice;

        // цикл while: если ввели неправильный номер, просим ввести снова
        while (choice < 1 || choice > 9)
        {
            cout << "Такой операции нет! Введите число от 1 до 9: ";
            cin >> choice;
        }

        if (choice == 1)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a + b;
            cout << "Результат: " << result << endl;
        }
        else if (choice == 2)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = b - a; // из второго вычитаем первое4
            cout << "Результат: " << result << endl;
        }
        else if (choice == 3)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a * b;
            cout << "Результат: " << result << endl;
        }
        else if (choice == 4)
        {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0)
            {
                cout << "Ошибка: на ноль делить нельзя!" << endl;
            }
            else
            {
                result = a / b;
                cout << "Результат: " << result << endl;
            }
        }
        else if (choice == 5)
        {
            int n;
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень N (целое число): ";
            cin >> n;

            result = 1;
            // цикл for: умножаем число само на себя N раз
            for (int i = 1; i <= abs(n); i++)
            {
                result = result * a;
            }

            if (n < 0)
            {
                if (a == 0)
                {
                    cout << "Ошибка: ноль в отрицательной степени!" << endl;
                }
                else
                {
                    result = 1 / result;
                    cout << "Результат: " << result << endl;
                }
            }
            else
            {
                cout << "Результат: " << result << endl;
            }
        }
        else if (choice == 6)
        {
            cout << "Введите число: ";
            cin >> a;
            if (a < 0)
            {
                cout << "Ошибка: корень из отрицательного числа не найти!" << endl;
            }
            else
            {
                result = sqrt(a);
                cout << "Результат: " << result << endl;
            }
        }
        else if (choice == 7)
        {
            cout << "Введите число: ";
            cin >> a;
            result = a / 100;
            cout << "1 процент от числа: " << result << endl;
        }
        else if (choice == 8)
        {
            int n;
            long long factorial = 1;
            cout << "Введите целое число: ";
            cin >> n;
            if (n < 0)
            {
                cout << "Ошибка: факториал отрицательного числа не существует!" << endl;
            }
            else if (n > 20)
            {
                cout << "Ошибка: слишком большое число (максимум 20)!" << endl;
            }
            else
            {
                // цикл for: перемножаем числа от 1 до n
                for (int i = 1; i <= n; i++)
                {
                    factorial = factorial * i;
                }
                cout << "Факториал: " << factorial << endl;
            }
        }
        else
        {
            cout << "Выход из программы. До свидания!" << endl;
        }

    } while (choice != 9);

    return 0;
}