#include "EX5.h"

double* giveMemoryToArr(double* ptrArr, int sizeOfArr)
{
	ptrArr = new double[sizeOfArr];
	return ptrArr;
}

void fillArr(double* ptrArr, int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
	{
		ptrArr[i] = (i + 1) * 0.2;
	}

}

void showArr(double* ptrArr, int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
	{
		cout << ptrArr[i] << "  ";
	}
	cout << endl;
}

double* freeMemory(double* ptrArr)
{
	delete[] ptrArr;
	ptrArr = 0;

	return ptrArr;
}

void swapDataInCells(int* ptrArr, int sizeOfArr)
{
	int buf = 0;
	for (int i = 0; i < sizeOfArr; i++)
	{
		if (i % 2 == 0)
		{
			buf = ptrArr[i];
			ptrArr[i] = ptrArr[i + 1];
			ptrArr[i + 1] = buf;
		}
	}
}
void show2Arr(int** ArrForChange, int strAmount, int colAmount)
{
	cout << endl << endl;
	for (int i = 0; i < strAmount; i++)
	{
		cout << " |  ";
		for (int j = 0; j < colAmount; j++)
		{
			cout << ArrForChange[i][j] << "  ";
		}
		cout << "|" << endl;
	}
}
void fill2Array(int** ArrForChange, int strAmount, int colAmount)
{
	srand(time(0));
	for (int i = 0; i < strAmount; i++)
	{
		for (int j = 0; j < colAmount; j++)
		{
			ArrForChange[i][j] = 10 + rand() % 41;
		}
	}
}