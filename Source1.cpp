//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100] = { 0 };
//	int size;
//	cout << " Enter the size of string: " << endl;
//	cin >> size;
//	cout << " Enter the values in array: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << " The array before sorting is: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << " \nThe array after sorting is: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}