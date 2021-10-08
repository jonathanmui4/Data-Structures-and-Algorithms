#include <iostream>

using namespace std;

void print_list(int* list, int length);
int find_min(int* list, int length, int start);
void swap(int& x, int& y);
void selection_sort(int* list, int length);

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

	selection_sort(list, n);

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

int find_min(int* list, int length, int start)
{
	int min_so_far = list[start];
	int min_index = start;
	for (int i = start; i < length; i++) {
		if (list[i] < min_so_far) {
			min_so_far = list[i];
			min_index = i;
		}
	}
	return min_index;
}

//Pass by reference
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void selection_sort(int* list, int length)
{
	for (int i = 0; i < length; i++) {
		int min_index = find_min(list, length, i);
		
		if (min_index != i) {
			swap(list[min_index], list[i]);
		}

		print_list(list, length);
	}
}