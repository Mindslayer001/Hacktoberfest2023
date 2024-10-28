// C++ program to implement min max selection 
// sort. 
#include <iostream> 
using namespace std; 

void minMaxSelectionSort(int* arr, int n) 
{ 
	for (int i = 0, j = n - 1; i < j; i++, j--) { 
		int min = arr[i], max = arr[i]; 
		int min_i = i, max_i = i; 
		for (int k = i; k <= j; k++) { 
			if (arr[k] > max) { 
				max = arr[k]; 
				max_i = k; 
			} else if (arr[k] < min) { 
				min = arr[k]; 
				min_i = k; 
			} 
		} 

		// shifting the min. 
		swap(arr[i], arr[min_i]); 

		// Shifting the max. The equal condition 
		// happens if we shifted the max to arr[min_i] 
		// in the previous swap. 
		if (arr[min_i] == max) 
			swap(arr[j], arr[min_i]); 
		else
			swap(arr[j], arr[max_i]); 
	} 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 23, 78, 45, 8, 32, 56, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	minMaxSelectionSort(arr, n); 
	printf("Sorted array:\n"); 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
	return 0; 
} 
