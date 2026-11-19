#include <iostream>

using namespace std;

// Обьявлення функцій
void task_proc41();
void task_int19();

int main()
{
    // Змінна для вибору завдання в меню
    int menu;

    // Запит номера завдання
    cout << "enter menu = ";
    cin >> menu;

    // Перевірка вибраного пункту меню
    switch (menu)
    {
    case 1:
    {
        // (Я не зрозумів як це зробити)
    }
    break;

    case 2:
    {
        // Виклик 5 разів функції переведення градусів у радіани
        task_proc41();
        task_proc41();
        task_proc41();
        task_proc41();
        task_proc41();
    }
    break;

    case 3:
    {
        // Виклик функції для знаходження кількості повних хвилин
        task_int19();
    }
    break;

    default:
    {
        // Повідомлення про неправильний вибір меню
        cout << "menu pages - 1 or 2 or 3" << endl;
        // Помилка до консолі
        return -1;
    }
    break;
    }

    return 0;
}

// Функція переведення градусів у радіани
float deg_to_rad(float deg)
{
    // Значення числа пі
    const float pi = 3.14;

    // Розрахунок радіан за формулою
    float result = deg * (pi / 180.0);

    // Результат
    return result;
}

// Функція введення градусів та виведення результату
void task_proc41()
{
    // Змінні для градусів та радіан
    float deg, rad;

    // Запит кількості градусів
    cout << "degree = ";
    cin >> deg;

    // Перевірка правильності введеного кута
    if (deg < 0.0 || deg > 360.0)
    {
        // Повідомлення про неправильне значення кута
        cout << "angle should be 0-360" << endl;
    }
    else
    {
        // Визов функції для переводу
        rad = deg_to_rad(deg);

        // Виведення результату
        cout << "radians = " << rad << endl;
    }
}

// Функція введення кількості секунд
int n_time()
{
    // Змінна кількості секунд
    int n_sec;

    // Запит кількості секунд
    cout << "n time = ";
    cin >> n_sec;

    // Вивід
    return n_sec;
}

// Функція для подсчета кількості повних хвилин
int n_math(int n_sec)
{
    // Знаходження кількості повних хвилин
    int n_res = n_sec / 60;

    // Результат
    return n_res;
}

// Функція підрахунку хвилин
void task_int19()
{
    // Змінні для секунд та хвилин
    int n_sec, minutes;

    // Отримання кількості секунд
    n_sec = n_time();

    // Підрахунок хвилин
    minutes = n_math(n_sec);

    // Вивід результату
    cout << "minutes = " << minutes << endl;
}