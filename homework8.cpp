#include <iostream>  // Подключаем библиотеку для ввода/вывода
#include <string> // Подключаем библиотеку для рпботы со строками
 using namespace std; // Разрешаем использовать стандартные функции без std::

int main() // Главная функция, с которой начинается выполнение программы
{         
    string Text;        // Объявляем строку
        cout << "Введите строку: "; // Выводим просьбу ввести строку
            getline(cin,Text);        // Считываем текст в переменную Text
    cout << "Вы ввели строку: " << Text << endl;   //выводим  строкy
     bool isogram = true;
for (int i = 0; i < Text.length(); i++)
{
        if (Text[i] == ' ')
        {
            continue;
        }
        for (int j = i +1; j < Text.length(); j++)
        {
            if (tolower(Text[i]) == tolower(Text[j]))
            {
            isogram = false;
            break;
            }
        }
    if (isogram == false)
    {
        break;
    }
}
    cout << boolalpha << isogram;
}