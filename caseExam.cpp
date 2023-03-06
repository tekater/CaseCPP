#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	system("color B5");
	cout << "Задание 1\n";
	int a,b,c,d,e;
	cout << "Введите первую оценку:\n";
	cin >> a;
	cout << "Введите вторую оценку:\n";
	cin >> b;
	cout << "Введите третью оценку:\n";
	cin >> c;
	cout << "Введите четвёртую оценку:\n";
	cin >> d;
	cout << "Введите пятую оценку:\n";
	cin >> e;
	int Ex;
	Ex = (a + b + c + d + e) / 5;

	if (Ex >= 4) {
		cout << "Допущен к экзамену";
	}
	else {
		cout << "не Допущен к экзамену";
	}


	cout << "\n\nЗадание 2\n";
	int Number;
	cout << "Введите число:\n";
	cin >> Number;
	if((Number % 2) == 1) {
		Number = Number / 2;
		cout << "Число не чётное: " << Number;
	}
	else {
		Number = Number * 3;
		cout << "Число чётное: " << Number;
	}


	cout << "\n\nЗадание 3\n";
	char CASE;
	int a1,a2,res;
	cout << "Введите первое число:\n";
	cin >> a1;
	cout << "Введите второе число:\n";
	cin >> a2;
	cout << "Выберите арифметическое действие '+', '-', '*', '/'\n";
	cin >> CASE;
	switch (CASE)
	{
	case '+':
		res = a1 + a2;
		cout << "Результат: " << res << endl;
		break;
	case '-':
		res = a1 - a2;
		cout << "Результат: " << res << endl;
		break;
	case '*':
		res = a1 * a2;
		cout << "Результат: " << res << endl;
		break;
	case '/':
		if (a1 == 0 || a2 == 0) {
			res = 0;
		}
		else {
			res = a1 / a2;
		}
			cout << "Результат: " << res << endl;
		break;
	default:
		cout << "\nПроизошла ошибка";
		break;
	}
}
