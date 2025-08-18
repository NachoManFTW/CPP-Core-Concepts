#include <vector>
#include <iostream>

//Selection sort
static void SelectionSort(std::vector<int>& vector)
{
	int vectorSize = vector.size(); //Get size of vector

	for (int i = 0; i < vectorSize; i++) //Loop to get current index
	{
		int min_index = i; //Current index = minimum index
		for (int j = i + 1; j < vectorSize; j++) //Loop to find smallest value in whole vector
		{
			if (vector[j] < vector[min_index]) //If value is smaller than previous value, assign to min_index
			{
				min_index = j;
			}
		}
		std::swap(vector[i], vector[min_index]); //Swap the position of the current smallest number, with the current index
		/*Or without swap
		int temp = vector[min_index];
		vector[min_index] = vector[i];
		vector[i] = temp;
		*/
	}
}