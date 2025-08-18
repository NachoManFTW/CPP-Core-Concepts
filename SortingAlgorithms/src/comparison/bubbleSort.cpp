#include <vector>

//Bubble sort, iterate through whole vector, if first value is bigger than second value swap places
static void BubbleSort(std::vector<int>& vector)
{
	int size = vector.size() - 1; //Get size of vector

	for (int i = 0; i <= size; i++) //Loop over vector size, first value
	{
		for (int j = i + 1; j <= size; j++)//Loop over vector size, second value
		{
			auto first = vector[i]; //First value
			auto second = vector[j]; //Second value

			//If the first is greater than the second, swap places, and continue the loop
			if (first > second)
			{
				std::swap(vector[j], vector[i]);
			}
		}
	}
}