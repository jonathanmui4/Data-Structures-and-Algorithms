#include <iostream>

using namespace std;

void print_list(int* list, int length);
void swap(int& x, int& y);
void packDuplicates(int* list, int n, int pivotIndex);
int partition(int* list, int start, int end);
void quickSort(int* list, int start, int end);

int main()
{
	int n;
	cout << "Enter the number of elements you want in array: " << endl;
	cin >> n;
	cin.ignore();

	int* list = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> list[i];
		cin.ignore();
	}

	print_list(list, n);

	quickSort(list, 0, n - 1);

	print_list(list, n);

	delete[] list;
}

void print_list(int* list, int length)
{
	for (int i = 0; i < length; i++) {
		cout << list[i];
		cout << " ";
		if (i == length - 1) {
			cout << endl;
		}
	}
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void packDuplicates(int* list, int n, int pivotIndex)
{
	int pivot = list[pivotIndex];
	int index = 1;
	while (index < pivotIndex) {
		if (list[index] == pivot) {
			pivotIndex--;
			swap(list[index], list[pivotIndex]);
		}
		else {
			index++;
		}
	}
}

int partition(int* list, int start, int end)
{
	//Sets pivot to be last element
	int pivot = list[end];
	//pIndex remembers last position element was placed in that was less than pivot
	int pIndex = start;

	//Iterates through array comparing each element with pivot
	for (int i = start; i < end; i++) {
		if (list[i] <= pivot) {
			swap(list[i], list[pIndex]);
			pIndex++;
		}
	}

	swap(list[end], list[pIndex]);
	//All duplicates of pivot are spread before pivot
	packDuplicates(list, end + 1, pIndex);
	return pIndex;
}

void quickSort(int* list, int start, int end)
{
	if (start >= end) {
		return;
	}
	else {
		int p = partition(list, start, end);
		quickSort(list, start, p - 1); //Recursive quicksort call for left partition
		print_list(list, end + 1);
		//p+1 start for right partition because partition index is sorted after partitioning
		quickSort(list, p + 1, end); //Recursive quicksort call for right partition
		print_list(list, end + 1);
	}
}