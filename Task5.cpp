
namespace HWLesson5
{
	bool checkMedianInArr(size_t size, int* Arr, size_t &medianPos)
	{
		long long sum = 0;
		for (size_t i = 0; i < size; i++)
			sum += Arr[i];
		if (sum % 2 != 0) return false;
		else
		{
			long long medianValue = sum / 2;
			sum = Arr[0];
			size_t i = 1;
			while (sum != medianValue && i < size)
			{
				sum += Arr[i];
				i++;
			}
			if (sum = medianValue)
			{
				medianPos = i;
				return true;
			}
			else
			{
				medianPos = 0;
				return false;
			}
		}
	}
}
