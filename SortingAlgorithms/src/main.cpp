#include <iostream>
#include <vector>
#include <random>
#include "comparison/bubbleSort.cpp"
#include "comparison/selectionSort.cpp"
#include "comparison/quickSort.cpp"

using namespace std;
int main()
{

	//Create random
	random_device rd;
	mt19937_64 gen(rd());//Use gen mt19937_64
	uniform_int_distribution<> distrib(1, 1000);

	vector<int> listOfNumbers(10);



	for (int& val : listOfNumbers)
	{
		val = distrib(gen);
	}

	
	cout << "Unsorted: " << endl;
	for (int& c : listOfNumbers)
	{
		cout << c << endl;
	}
	
	//BubbleSort(listOfNumbers);
	//SelectionSort(listOfNumbers);
	QuickSort(listOfNumbers, 0, listOfNumbers.size() - 1);

	
	cout << "Sorted: " << endl;
	for (int& c : listOfNumbers)
	{
		cout << c << endl;
	}
	
}