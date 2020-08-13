// This program implements selection sort in C++
// By: Nick from CoffeeBeforeArch

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *array, int n)
{
	int min_key;
	for (int i = 0; i < n - 1; ++i) {
		min_key = i;
		for (int j = i + 1; j < n; ++j) {
			if (array[min_key] > array[j]) {
				min_key = j;
			}
		}
		swap(&array[i], &array[min_key]);

		cout << "Swapped element " << i << " with element " << min_key << endl
			<< "New Array: ";
		for (int i = 0; i < n; ++i) {
			cout << array[i] << "\t";
		}
		cout << "\n\n";
	}
}

int main(int argc, char *argv[])
{
	int size = 6;
	int array[6];
	srand(time(nullptr));  // seed the random generator
	cout << "Initial array: ";
	for (int i = 0; i < size; ++i)
		cout << (array[i] = rand() % 100) << '\t';
	cout << "\n\n";
	selection_sort(array, size);
}