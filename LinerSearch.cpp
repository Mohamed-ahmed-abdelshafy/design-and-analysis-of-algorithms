
#include <iostream>
using namespace std;
int main()
{
	//Carete array
	int arr[] = { 10,6,8,9,4,5,68,11,45 };
	// Carete variable input from users for the search the number
	int x;
	cout << "pelase Enter the number  intger you needed search in the array" << endl;
	//input from user search the number
	cin >> x;
	//store the number true the search or return -1 the is not found
	int index= - 1;
	// The bultin function SizeOf  return Size array in Memory and multiplay one element on array get the number of array
	int size = sizeof(arr)/sizeof(arr[0]);
	//for loop in array
		for (int i = 0; i <size; i++) {
			if (arr[i] == x) {
				index = i;
				break;
			}
	
	}
		if (index != -1) {
			cout << x<< " " << "is found at index"<<" " << index << endl;
		}
		else {
			cout << x <<" " << "Not Found" << endl;
		}
}

