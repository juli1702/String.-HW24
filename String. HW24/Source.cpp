#include <iostream>
#include <string>
using namespace std;

bool word(string w1);
int checkSym(string z3);

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1.
	/*���� ������ str.������������ ������ ������ sym.��������� ������ ����� ������, ������� ������� ��
	������� sym. ����� ����� ������ ����� ���������� ���������� ��������� ������� � ����������� ������ str.*/
	cout << "������ 1.\n������� ������: ";
	string str = "hello world!!!";
	char sym;
	cin >> sym;
	string newStr;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			newStr += sym;
	
	cout <<"����������� ������: "<< str << "\n����� ������: " << newStr << endl;
	cout << endl;

	//������ 2. 
	/*�������� �������, ������� ��������� ����� � ���������� true, ���� ��� �������� �����������.�
	��������� ������ ������������ false. ������� ������ ���� �������������������.*/
	cout << "������ 2.\n������� �����: ";
	string pall;
	cin >> pall;
	cout << word(pall) << "\n\n";

	//������ 3.
	/*�������� �������, ������� ��������� ������. ������� ������� ��� �������, �����, �������,
	��������������� � �������������� �����, ������� ���� � ���������� ������ � ���������� �� ����� ����������.*/
	cout << "������ 3.\n����������� ������: ";
	string z3 = "Hello! My name is Julia.";
	cout << z3 << endl;
	cout << "���������� ��������, �����, �������, ��������������� � �������������� ������ = " << checkSym(z3) << endl;


	return 0;
}
//������ 2.
bool word(string w1) {
	int len = w1.size();
	for (int i = 0; i < len; i++)
		w1[i] = tolower(w1[i]);
	for (int i = 0; i < len/2; i++)
		if (w1[i] == w1[len - 1 - i])
			return true;
	return false;
}

//������ 3.
int checkSym(string z3) {
	int count = 0; 
	int len = z3.size();
	for (int i = 0; i < len; i++)
		if (z3[i] == ' ' || z3[i] == '!' || z3[i] == '.' || z3[i] == ',' || z3[i] == '?')
			count++;
	return count;
}