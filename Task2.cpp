#include "Task2.h"

namespace HWLesson5
{
	void invertArr(size_t size, unsigned short shortArr[])
	{
		for (size_t i = 0; i < size; i++)
		{
			shortArr[i] = shortArr[i] != 1;
		}
	}
}
