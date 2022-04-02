#include <iostream>
#include <string>
using namespace std;

bool word(string w1);
int checkSym(string z3);

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	/*Дана строка str.Пользователь вводит символ sym.Программа создаёт новую строку, которая состоит из
	символа sym. Длина новой строки равна количеству совпадений введённого символа в изначальной строке str.*/
	cout << "Задача 1.\nВведите символ: ";
	string str = "hello world!!!";
	char sym;
	cin >> sym;
	string newStr;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			newStr += sym;
	
	cout <<"Изначальная строка: "<< str << "\nНовая строка: " << newStr << endl;
	cout << endl;

	//Задача 2. 
	/*Создайте функцию, которая принимает слово и возвращает true, если оно является палиндромом.В
	противном случае возвращается false. Функция должна быть нерегистрозависимой.*/
	cout << "Задача 2.\nВведите слово: ";
	string pall;
	cin >> pall;
	cout << word(pall) << "\n\n";

	//Задача 3.
	/*Создайте функцию, которая принимает строку. Функция считает все пробелы, точки, запятые,
	восклицательные и вопросительные знаки, которые есть в переданной строке и возвращает их общее количество.*/
	cout << "Задача 3.\nИзначальная строка: ";
	string z3 = "Hello! My name is Julia.";
	cout << z3 << endl;
	cout << "Количество пробелов, точек, запятых, восклицательных и вопросительных знаков = " << checkSym(z3) << endl;


	return 0;
}
//Задача 2.
bool word(string w1) {
	int len = w1.size();
	for (int i = 0; i < len; i++)
		w1[i] = tolower(w1[i]);
	for (int i = 0; i < len/2; i++)
		if (w1[i] == w1[len - 1 - i])
			return true;
	return false;
}

//Задача 3.
int checkSym(string z3) {
	int count = 0; 
	int len = z3.size();
	for (int i = 0; i < len; i++)
		if (z3[i] == ' ' || z3[i] == '!' || z3[i] == '.' || z3[i] == ',' || z3[i] == '?')
			count++;
	return count;
}