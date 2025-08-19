#include <iostream>
#include <vector>

//Partition funciton for quick sort, rearranges the numbers in the part of the array between low and high
static int Partition(std::vector<int>& inputVector, int low, int high)
{
	int pivot = inputVector[high]; //Selects the pivot element, last number of current subarray
	int i = low - 1; //Tracks where the smaller number ends in the array

	for (int j = low; j < high; j++) //Go through each number from start - before the pivot
	{
		if (inputVector[j] <= pivot) //If number is smaller or equal to pivot
		{
			i++; //Increment i
			std::swap(inputVector[i], inputVector[j]); //Move it to the begining of the partition
		}

	}
	std::swap(inputVector[i + 1], inputVector[high]); //After all numbers are ordered, put pivot to the highest point
	return i + 1; //Return the pivot's index, for next array split
}

//Quick sort function, sorts the numbers between low and high
static void QuickSort(std::vector<int>& inputVector, int low, int high)
{
	if (low < high) //Only sort if there's more than 1 number
	{
		int pivotIndex = Partition(inputVector, low, high); // Split array around the pivot, small left, large right
		//Repeat until every part has 1 or 0 numbers
		QuickSort(inputVector, low, pivotIndex - 1); //Sort left side
		QuickSort(inputVector, pivotIndex + 1, high); //Sort right side
	}

}

/*How it works
1. Pick pivot
2. Move all smaller number to the left, bigger numbers to the right
3. Do the same thing for the left and right sides
4. Keep Doing until the whole array is sorted
*/
