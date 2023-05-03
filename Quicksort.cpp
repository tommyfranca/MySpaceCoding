// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Controllo che la posizione dell'array sia giusta
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Ordino la parte destra e sinistra rispetto al pivot
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end) {

	// Caso base
	if (start >= end)
		return;

	// Partizione dell'array
	int p = partition(arr, start, end);

	// Parte sinistra
	quickSort(arr, start, p - 1);

	// Parte destra
	quickSort(arr, p + 1, end);
}

int main() {
	int n;
	cout<<"Inserire grandezza array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
	cout<<"Inserire valore: ";
	cin>>arr[i];
	}


	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

