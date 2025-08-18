#include <iostream>
#include <vector>
#include <random>
#include "comparison/bubbleSort.cpp"

using namespace std;
int main()
{

	//Create random
	random_device rd;
	mt19937_64 gen(rd());//Use gen mt19937_64
	uniform_int_distribution<> distrib(1, 100);

	vector<int> listOfNumbers(20000);

	for (int& val : listOfNumbers)
	{
		val = distrib(gen);
	}

	BubbleSort(listOfNumbers);
}