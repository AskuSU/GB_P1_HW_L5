
namespace HWLesson5
{
	void extenderArray(size_t size, unsigned short arr[])
	{
		size_t delta = 1;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = delta;
			delta += 3;
		}
	}
}