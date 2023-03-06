#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int key;
	cout << "Выберите кейс: [1][2][3][4][5]" << endl;
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "case 1";
		break;
	case 2:
		cout << "case 2";
		break;
	case 3:
		cout << "case 3";
		break;
	case 4:
		cout << "case 4";
		break;
	case 5:
		cout << "case 5";
		break;
	default:
		cout << "default";
		break;
	}
	return 0;
}
