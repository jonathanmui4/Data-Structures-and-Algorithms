#include <iostream>

using namespace std;

void print_list(int* list, int length);
void insertion_sort(int* list, int length);
void insert(int* list, int current);

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

	insertion_sort(list, n);

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

void insert(int* list, int current)
{
	int i = current - 1;
	int temp = list[current];
	cout << "temp: " << temp << " | ";
	while (i >= 0 && temp < list[i]) {
		list[i + 1] = list[i];
		i -= 1;
	}
	//Inserting number at correct position
	list[i + 1] = temp;
}

void insertion_sort(int* list, int length)
{
	for (int current = 1; current < length; current++) {
		insert(list, current);
		print_list(list, length);
	}
}