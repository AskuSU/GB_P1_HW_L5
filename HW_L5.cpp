#include <iostream>
#include "Task1.h"
#include "Task2.h"

using namespace std;
using namespace HWLesson5;

void Task1()
{
	cout << "Вывод массива типа double:" << endl;
	const size_t SIZE = 12;
	double myArr[SIZE] = { 13, 15, 23, 42, 2.1f, 12.45f, 43, 23, 1, 2, 3, 4.34f };
	PrintArr(SIZE, myArr);
}

void Task2()
{
	const size_t SIZE = 10;
	unsigned short myArr[SIZE] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
	PrintArr(SIZE, true, myArr);
	invertArr(SIZE, myArr);
	cout << "Инверированный массив:" << endl;
	PrintArr(SIZE, false, myArr);
}

void Task3()
{

}

void Task4()
{

}

void Task5()
{

}


int main()
{
	setlocale(LC_ALL, "RU");

	int taskNumber = 0;
	while (true)
	{
		do
		{
			cout << "Введите номер задачи от 1 до 5:" << endl;
			cin >> taskNumber;
		} while (taskNumber > 5 || taskNumber < 1);

		cout << endl;

		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		case 5: Task5();
			break;
		}
		cout << endl;
	}
}

