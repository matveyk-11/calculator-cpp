#include <iostream>
#include <clocale>
using namespace std;

// массив для таблицы умножения (общий для всех функций)
int table[10][10];

// функция заполняет массив числами
void fillTable()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            table[i][j] = (i + 1) * (j + 1);
        }
    }
}

// функция выводит массив на экран
void printTable()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Таблица умножения:" << endl;

    fillTable();
    printTable();

    return 0;
}