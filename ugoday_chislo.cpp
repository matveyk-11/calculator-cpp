#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

// функция выбирает случайное число от 0 до 100
int getRandomNumber()
{
    int number = rand() % 101;
    return number;
}

// функция просит пользователя ввести число
int inputGuess()
{
    int guess;
    cout << "Введите число от 0 до 100: ";
    cin >> guess;
    return guess;
}

// функция сама игра
void playGuessGame()
{
    int secret = getRandomNumber();
    int guess;

    cout << "Я загадал число от 0 до 100. Попробуй угадай!" << endl;

    guess = inputGuess();

    // цикл работает, пока число не угадано
    while (guess != secret)
    {
        if (guess < secret)
        {
            cout << "Мое число больше." << endl;
        }
        else
        {
            cout << "Мое число меньше." << endl;
        }
        guess = inputGuess();
    }

    cout << "Победа! Ты угадал число " << secret << "!" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0)); // чтобы число каждый раз было разным

    playGuessGame();

    return 0;
}