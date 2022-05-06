#ifndef EX5_H
#define EX5_5
#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

double* giveMemoryToArr(double* ptrArr, int sizeOfArr);
void fillArr(double* ptrArr, int sizeOfArr);
void showArr(double* ptrArr, int sizeOfArr);
double* freeMemory(double* ptrArr);
void swapDataInCells(int* ptrArr, int sizeOfArr);
void show2Arr(int** ArrForChange, int strAmount, int colAmount);
void fill2Array(int** ArrForChange, int strAmount, int colAmount);


#endif EX_5