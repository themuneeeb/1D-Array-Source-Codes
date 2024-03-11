//#include <iostream>
//using namespace std;
//void searchnum(int a[], int  size)
//{
//	int l = size - 1, m, n = 0;
//	cout << " Enter the number u want to search in Array : " << endl;
//	cin >> n;
//	m = l / 2;
//	if (n == a[m])
//	{
//		cout << " Value is found at index " << m << endl;
//	}
//	else if (n > a[m])
//	{
//		for (int i = m + 1; i < size; i++)
//		{
//			if (n == a[i])
//			{
//				cout << " Value is found at index " << i << endl;
//			}
//		}
//	}
//	else if (n < a[m])
//	{
//		for (int i = 0; i < m; i++)
//		{
//			if (n == a[i])
//			{
//				cout << " Value is found at index " << i << endl;
//			}
//		}
//	}
//	else
//		cout << " Enter value is not found in Array " << endl;
//
//
//}
//int main()
//{
//	int arr[100] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }, s;
//	cout << " Enter the size of Array : " << endl;
//	cin >> s;
//	searchnum(arr, s);
//}