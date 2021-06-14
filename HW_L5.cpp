#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"

using namespace std;

void Task1()
{
	cout << "Вывод массива типа double:" << endl;
	const size_t SIZE = 12;
	double myArr[SIZE] = { 13, 15, 23, 42, 2.1f, 12.45f, 43, 23, 1, 2, 3, 4.34f };
	HWLesson5::PrintArr(SIZE, myArr);
}

void Task2()
{
	const size_t SIZE = 10;
	unsigned short myArr[SIZE] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
	HWLesson5::PrintArr(SIZE, true, myArr);
	HWLesson5::invertArr(SIZE, myArr);
	cout << "Инверированный массив:" << endl;
	HWLesson5::PrintArr(SIZE, false, myArr);
}

void Task3()
{
	cout << "Заполнили массив:" << endl;
	const size_t SIZE = 8;
	unsigned short myArr[SIZE] = { 0 };
	HWLesson5::extenderArray(SIZE, myArr);
	HWLesson5::PrintArr(SIZE, true, myArr);
}

void Task4()
{
	cout << "Циклическое смещение массива" << endl;
	cout << "Исходный массив:" << endl;
	const size_t SIZE = 15;
	unsigned short myArr[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	HWLesson5::PrintArr(SIZE, true, myArr);
	short n;
	cout << "Введите кол-во смещений n = " << endl;
	cin >> n;
	HWLesson5::displaceArray(SIZE, n, myArr);
	cout << "Смещенный на " << n << " массив:" << endl;
	HWLesson5::PrintArr(SIZE, false, myArr);

}

void Task5()
{
	cout << "Поиск медианы для массива" << endl;
	cout << "Исходный массив:" << endl;
	const size_t SIZE = 5;
	int myArr[SIZE] = { 10, 1, 2, 3, 4 };
	//{ -1, 4, -1, -1, 3 };
	//{ -5, 1, 1, 3, -10 };
	size_t medianPos = 0;
	HWLesson5::PrintArr(SIZE, true, myArr, medianPos);
	if (HWLesson5::checkMedianInArr(SIZE, myArr, medianPos))
	{
		cout << "В данном мвсиве медиана находится после " << medianPos << " элемента" << endl;
		HWLesson5::PrintArr(SIZE, false, myArr, medianPos);
	}
	else cout << "В данном мвсиве медиана не обнаружена" << endl;
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

