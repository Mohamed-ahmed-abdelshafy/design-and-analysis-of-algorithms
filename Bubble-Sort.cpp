#include<iostream>
using namespace std;

//function Swap
void Swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//print array
void Printarr(int arr[], int size) {
	cout << "Array Is [";
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" , ";
	}
	cout << "]" << endl;
}
// algorithms bubble sort
void bubbleSort(int arr[],int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <size-i-1; j++) {     // for itreation  / passes
			if (arr[j + 1] < arr[j]) {		   // for finding the biggest num
				Swap(&arr[j], &arr[j + 1]);
			}

		}
	}
}
int main() {

	int unsorted[9] = { 1, 8, 9, 7, 2, 3, 4, 5,6 };
	bubbleSort(unsorted, 9);
	Printarr(unsorted, 9);

}