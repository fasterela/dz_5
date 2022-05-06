#include "EX5.h"
int main()
{
	double* pArrForFill = 0;
	char userAnswer = 0;

	do
	{
		int sizeOfArray = 0;
		cout << "Size of array: ";
		cin >> sizeOfArray;

		pArrForFill = giveMemoryToArr(pArrForFill, sizeOfArray);
		fillArr(pArrForFill, sizeOfArray);
		showArr(pArrForFill, sizeOfArray);
		pArrForFill = freeMemory(pArrForFill);

		cout << "\nContinue (1). Exit (0): ";
		cin >> userAnswer;
	} while (userAnswer != '0');
	return 0;
}

	/* 2 часть
		int sizeOfArray = 12;
		int* pArrForSwap = new int[sizeOfArray];
		fillArr(pArrForSwap, sizeOfArray);
		showArr(pArrForSwap, sizeOfArray);
		swapDataInCells(pArrForSwap, sizeOfArray);
		showArr(pArrForSwap, sizeOfArray);

		delete[] pArrForSwap;
	*/

	/* 3 часть
	
	int stringAmount = 0;
	int columnAmount = 0;
 
	cout << "Size of array: \n";
	cout << "String amount: ";
	cin >> stringAmount;
	cout << "Column amount: ";
	cin >> columnAmount;
 

	int** ArrayForChange = new int*[stringAmount];
	for (int i = 0; i < stringAmount; i++)
	{
	ArrayForChange[i] = new int[columnAmount];
	}
 
	fill2Array(ArrayForChange, stringAmount, columnAmount); 
	show2Arr(ArrayForChange, stringAmount, columnAmount); 
 
	
	for (int i = 0; i < stringAmount; i++)
	{
	delete[] ArrayForChange[i];
	}
	delete[] ArrayForChange;
 
	return 0;	
	
	
	*/