
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int value);
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
	int x;
	cout << "please Enter The number intger" << endl;
	cin >> x;
	
	int size = sizeof(arr) / sizeof(arr[0]);
	int index = BinarySearch(arr, size, x);
	if (index != -1) {
		cout << x << " is Found at index " << index << endl;
	}
	else {
		cout << x << " is Not Found" << endl;
	}
} 
int BinarySearch(int arr[],int size,int value) {
	int low = 0;
	int high = size - 1;
	int mid;
	while (low<=high) {
		 mid = (low + high) / 2;
		if (arr[mid] == value) {
			return mid;
		}
		else if (arr[mid] < value) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}


