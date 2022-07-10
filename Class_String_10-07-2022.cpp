// Class_String_10-07-2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// д/з от 2-07-2022
// Разработать класс String который в дальнейшем будет использоваться
// для работы со строками. Класс должен содержать:
// 
// 1. Конструктор, позволяющий создавать строку произвольного размера;
// 2. Конструктор, который создает строку и инициализирует её строкой,
//      полученной от пользователя.
// 3. Необходимо создать деструктор, а также использовать механизмы 
//      делигирования конструкторов, если это возможно.
// 4. Класс должен содержать методы для ввода строк 
//      с клавиатуры и вывода строк на экран.

#include <iostream>
using namespace std;
class MyString
{
public:
	MyString()
	{
		str = nullptr;
	}
	 MyString(const char *str)
	{
		int lenght = strlen(str);
		this->str = new char[lenght + 1];
		for (int i = 0; i < lenght; i++)
		{
			this->str[i] = str[i];
		}
		this->str[lenght] = '\0';
	}
	~MyString()
	{
		delete[] this->str;
	}

	void Print()
	{
		cout << endl;
		cout << str;
		cout << endl;
	}
private:
	char *str;

};

int main()
{
	MyString str("yutyu");
	str.Print();
	return 0;
}
// конец