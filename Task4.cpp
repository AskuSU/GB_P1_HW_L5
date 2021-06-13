
namespace HWLesson5
{
	void displaceArray(size_t size, short offset, unsigned short *arr)
	{
		bool isForward;
		if (!(isForward = offset > 0)) offset = -offset;
		if (offset / size > 0) offset -= size * (offset / size);
		while (offset)
		{
			unsigned endElement = (isForward) ? arr[size - 1] : arr[0];
			for (size_t i = 0; i < size - 1; i++)
			{
				if (isForward) arr[size - i - 1] = arr[size - i - 2];
				else arr[i] = arr[i + 1];
			}
			if (isForward)  arr[0] = endElement;
			else arr[size - 1] = endElement;
			offset--;
		}			
	}
}