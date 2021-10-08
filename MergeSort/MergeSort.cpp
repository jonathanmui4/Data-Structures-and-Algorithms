#include <iostream>

using namespace std;

void print_list(int* list, int length);
void merge(int* list, int left, int middle, int right, int size);
void merge_sort(int* list, int left, int right, int size);

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

	merge_sort(list, 0, n - 1, n);

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

void merge(int* list, int left, int middle, int right, int size)
{
	//Index at left subtree
	int left_ptr = left;
	//Index at right subtree
	int right_ptr = middle + 1;
	int temp_ptr = left;

	//Creating temp array
	int* temp = new int[size];

	while (left_ptr <= middle && right_ptr <= right) {
		//Compares left subtree and right subtree and sorts elements from smallest to largest
		//inside the temp array
		if (list[left_ptr] <= list[right_ptr]) {
			temp[temp_ptr] = list[left_ptr];
			left_ptr++;
			temp_ptr++;
		}
		else {
			temp[temp_ptr] = list[right_ptr];
			right_ptr++;
			temp_ptr++;
		}
	}

	//Deals with any unsorted stuff
	//Copying remaining elements from left subarray to temp as it is
	while (left_ptr <= middle) {
		temp[temp_ptr] = list[left_ptr];
		left_ptr++;
		temp_ptr++;
	}
	//Copying remaining elements from right subarray to temp as it is
	while (right_ptr <= right) {
		temp[temp_ptr] = list[right_ptr];
		right_ptr++;
		temp_ptr++;
	}

	for (int i = left; i <= right; i++) {
		list[i] = temp[i];
	}

	delete[] temp;
}

void merge_sort(int* list, int left, int right, int size)
{
	if (left < right) {
		int middle = (left + right) / 2;
		merge_sort(list, left, middle, size);
		print_list(list, right + 1);
		merge_sort(list, middle + 1, right, size);
		print_list(list, right + 1);
		merge(list, left, middle, right, size);
		print_list(list, right + 1);
	}
	return;
}