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
	MyString & operator =(const MyString &other)
	{
		if (this->str = nullptr)
		{
			delete[] str;
		}
		int lenght = strlen(other.str);
		this->str = new char[lenght + 1];
		for (int i = 0; i < lenght; i++)

		{
			this->str[i] = other.str[i];
		}
		this->str[lenght] = '\0';
		return *this;
	}
	void  myString(const MyString& other)
	{
		if (this->str = nullptr)
		{
			delete[] str;
		}
		int lenght = strlen(other.str);
		this->str = new char[lenght + 1];
		for (int i = 0; i < lenght; i++)

		{
			this->str[i] = other.str[i];
		}
		this->str[lenght] = '\0';
	}
	MyString & operator +(const MyString &other)
	{
		MyString newStr;
		int thislight = strlen(this->str);
		int otherlenght = strlen(other.str);
		newStr.str = new char[thislight + otherlenght + 1];
		int i{ 0 };
		for (int i = 0; i < thislight; i++)
		{
			newStr.str[i] = this->str[i];
		}
		for (int j = 0; j < otherlenght; j++, i++)
		{
			newStr.str[i] = other.str[j];
		}
		newStr.str[thislight + otherlenght + '\0'];
		return newStr;
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
	MyString str2("222");
	str2.Print();
	MyString str3("jgh");
	str3.Print();
	str2 = str3;
	str2.Print();
	MyString res;
	//res = str2 + str3;;
	
	res.Print();
	return 0;

}
// конец