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
	int i = 0; // ������� �����
	int n; //��������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i++ << "Hello" << endl;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
	}
	cout << endl;
#endif // WHILE_2

#ifdef GETCH
	char key; // ��� ���������� ����� ������� ��� ������� �������
	do
	{
		key = _getch(); // ������ _getch () ������� ������� �������
		// � ���������� ASCII-��� ������� �������
// ������� _gatch () ��������� � ���������� <conio.h>
//(int)key - ����� ����������� ���������� key � ��� ������ char,
//��� ���� ����� ������� ��� ������� �������
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // GETCH

	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
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