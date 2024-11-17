
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int hige, int value);
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
	int x;
	cout << "please Enter The number intger" << endl;
	cin >> x;
	int size = sizeof(arr) / sizeof(arr[0]);
	int low = 0;
	int hige = size - 1;
	int index = BinarySearch(arr, hige,low,x);
	if (index != -1) {
		cout << x << " is Found at index " << index << endl;
	}
	else {
		cout << x << " is Not Found" << endl;
	}
}
int BinarySearch(int arr[], int low, int hige,int value) {
	int mid = (low + hige) / 2;
	if (arr[mid] == value) {
		return mid;
	}
	else if (arr[mid] < value) {
		return BinarySearch(arr, mid + 1, hige, value);
	}
	else {
		return BinarySearch(arr, mid - 1, low, value);
	}
}


