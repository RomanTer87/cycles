#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define GETCH
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0; // счетчик цикла
	int n; //колиество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello" << endl;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n; // количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
	}
	cout << endl;
#endif // WHILE_2

#ifdef GETCH
	char key; // эта переменная будет хранить код нажатой клавиши
	do
	{
		key = _getch(); // функия _getch () ожидает нажатие клавиши
		// и возвращает ASCII-код нажатой клавиши
// функция _gatch () находится в библиотеке <conio.h>
//(int)key - явное образование переменной key в тип данных char,
//для того чтобы увидеть код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // GETCH

	int n; // количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";

	}
	cout << endl;
}