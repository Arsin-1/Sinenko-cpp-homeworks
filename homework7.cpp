#include <iostream>  // Подключаем библиотеку для ввода/вывода
 using namespace std; // Разрешаем использовать стандартные функции без std::

int main() // Главная функция, с которой начинается выполнение программы
{         
    int x;
        cout << "Введите целое число: "; // Выводим просьбу ввести число
            cin >> x;        // Считываем число в переменную x
if (x<0||x>1000000||(x % 10 == 0 && x != 0))
{
 cout << "false";
     return 0;  
}
 int x_rev = 0;
  int x_org = x;
while (x != 0)
{
    int x_dig = x % 10;
    x_rev = x_rev * 10 + x_dig;
    x /= 10;
}
    if (x_rev == x_org)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
}