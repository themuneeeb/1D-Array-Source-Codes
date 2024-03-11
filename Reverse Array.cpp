#include <iostream>
using namespace std;
int main()
{
	int size, arr[100];
	cout << " Enter the size: " << endl;
	cin >> size;
	cout << " Enter the elements in Array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << " The Array is: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << " \nThe rotate after reversing is: " << endl;
	for (int i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}