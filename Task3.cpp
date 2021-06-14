
namespace HWLesson5
{
	void extenderArray(size_t size, unsigned short *arr)
	{
		arr[0] = 1;
		for (size_t i = 1; i < size; arr[i] = arr[i - 1] + 3, i++);
	}
}