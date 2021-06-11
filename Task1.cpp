#include "Task1.h"

using namespace std;

namespace HWLesson5
{
	void PrintArr(size_t size, double Arr[])
	{
		cout << "Кол-во элементов = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}
	void PrintArr(size_t size, bool NeedCnt, unsigned short Arr[])
	{
		if (NeedCnt) cout << "Кол-во элементов = " << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << Arr[i] << ' ';
		}
		cout << endl;
	}
}
