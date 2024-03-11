//#include <iostream>
//using namespace std;
//void sorting(int a[], int s)
//{
//	int temp;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = i + 1; j < s; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < s; i++)
//	{
//		cout << a[i] << " \t ";
//	}
//	cout << endl;
//	cout << " The smallest value in Array is : " << a[0] << endl;
//}
//int main()
//{
//	int a[10], size;
//	cout << " Enter the size for Array : " << endl;
//	cin >> size;
//	cout << " Enter the values in Array : " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> a[i];
//	}
//	sorting(a, size);
//}