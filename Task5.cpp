
namespace HWLesson5
{
	bool checkMedianInArr(size_t size, int* arr, size_t& medianPos)
	{
		long long sum = 0;
		for (size_t i = 0; i < size; i++)
			sum += arr[i];
		if (sum % 2 != 0) return false;
		else
		{
			long long medianValue = sum / 2;
			sum = arr[0];
			size_t i = 1;
			while (sum != medianValue && i < size)
			{
				sum += arr[i];
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
